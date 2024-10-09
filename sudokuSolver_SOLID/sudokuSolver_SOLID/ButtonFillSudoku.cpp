#include "ButtonFillSudoku.h"

void ButtonFillSudoku::FillSudokuButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel)
{
    this->Visible = false;
    this->Enabled = false;

    currentRow = 0;
    currentCol = 0;

    sudokuFieldsGlobal = gcnew array<SudokuField^, 2>(9, 9);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (fieldsSudoku[i, j] != nullptr)
            {
                sudokuFieldsGlobal[i, j] = fieldsSudoku[i, j];

                if (fieldsSudoku[i, j]->GetLocked()) {
                   int a = fieldsSudoku[i, j]->GetValue();
                   int c = sudokuFieldsGlobal[i, j]->GetValue();
                }

                if (fieldsSudoku[i, j] != nullptr)
                {
                    sudokuFieldsGlobal[i, j]->SetValue(fieldsSudoku[i, j]->GetValue(), fieldsSudoku, i, j);
                }
                else
                {
                    sudokuFieldsGlobal[i, j]->Text = "";
                }
            }
        }
    }

    while (FillSudokuStep(sudokuFieldsGlobal) != true);

    int a = sudokuFieldsGlobal[0, 0]->GetValue();
    int b = fieldsSudoku[0, 0]->GetValue();


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            SudokuMajorField^ majorField = dynamic_cast<SudokuMajorField^>(MainPanel->Controls[i * 3 + j]);

            for (int minorIndex = 0; minorIndex < majorField->Controls->Count; minorIndex++) {
                SudokuMiniorField^ minorField = dynamic_cast<SudokuMiniorField^>(majorField->Controls[minorIndex]);

                for (int fieldIndex = 0; fieldIndex < minorField->GetFields()->Length; fieldIndex++) {
                    SudokuField^ field = minorField->GetField(fieldIndex);

                    int globalRow = i * 3 + (minorIndex / 3);
                    int globalCol = j * 3 + (minorIndex % 3);

                    if (!sudokuFieldsGlobal[globalRow, globalCol]->GetLocked() && sudokuFieldsGlobal[globalRow, globalCol]->GetValue() != 0)
                    {
                        field->SetValueInt(sudokuFieldsGlobal[globalRow, globalCol]->GetValue());
                        int fieldVal = sudokuFieldsGlobal[globalRow, globalCol]->GetValue();
                    }
                }
            }
        }
    }

    this->Visible = true;
    this->Enabled = true;
}

bool ButtonFillSudoku::FillSudokuStep(array<SudokuField^, 2>^ fieldsSudoku)
{
    if(!FindEmptyLocation(sudokuFieldsGlobal, currentRow, currentCol))
        return true;

    if (sudokuFieldsGlobal[currentRow, currentCol]->GetLocked()) {
        return false;
    }

    for (int num = 1; num <= 9; num++)
    {
        if (IsValidFill(sudokuFieldsGlobal, currentRow, currentCol, num))
        {
            sudokuFieldsGlobal[currentRow, currentCol]->SetValue(num, sudokuFieldsGlobal, currentRow, currentCol);
            return false;
        }
    }

    return false;
}

bool ButtonFillSudoku::FindEmptyLocation(array<SudokuField^, 2>^ fieldsSudoku, int% row, int% col)
{
    for (row = currentRow; row < 9; row++)
    {
        for (col = (row == currentRow) ? currentCol : 0; col < 9; col++)
        {
            if (!sudokuFieldsGlobal[row, col]->GetLocked() && (sudokuFieldsGlobal[row, col]->GetValue() == 0 || sudokuFieldsGlobal[row, col]->Text == ""))
                return true;
        }
    }
    return false;
}

bool ButtonFillSudoku::IsValidFill(array<SudokuField^, 2>^ fieldsSudoku, int% row, int% col, int value)
{
    for (int i = 0; i < 9; i++)
    {
       int valueRow = sudokuFieldsGlobal[row, i]->GetValue();
       int valueCol = sudokuFieldsGlobal[i, col]->GetValue();

        if (sudokuFieldsGlobal[row, i]->GetValue() == value || sudokuFieldsGlobal[i, col]->GetValue() == value)
            return false;
    }

    int startRow = row / 3 * 3;
    int startCol = col / 3 * 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (sudokuFieldsGlobal[startRow + i, startCol + j]->GetValue() == value)
                return false;
        }
    }

    return true;
}

ButtonFillSudoku::ButtonFillSudoku(Panel^ panel, array<SudokuField^, 2>^ fieldsSudoku)
{
    mainPanel = panel;
    sudokuFieldsGlobal = fieldsSudoku;
}
