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
            sudokuFieldsGlobal[i, j] = gcnew SudokuField();
            sudokuFieldsGlobal[i, j]->SetValue(fieldsSudoku[i, j]->GetValue(), sudokuFieldsGlobal, i, j);

            if (fieldsSudoku[i, j]->GetLocked() && fieldsSudoku[i, j]->GetValue() > 0)
            {
                sudokuFieldsGlobal[i, j]->SetLocked(true);
            }
        }
    }

    if (!FillSudokuStep(sudokuFieldsGlobal))
    {
        MessageBox::Show("Sudoku is impossible to solve.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        Application::Restart();
        return; 
    }

    for (int r = 0; r < 9; r++)
    {
        for (int c = 0; c < 9; c++)
        {
            int valueFill = sudokuFieldsGlobal[r, c]->GetValue();
            fieldsSudoku[r, c]->SetValue(sudokuFieldsGlobal[r, c]->GetValue(), fieldsSudoku, r, c);
            if (valueFill > 0) fieldsSudoku[r, c]->SetLocked(true);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            SudokuMajorField^ majorField = dynamic_cast<SudokuMajorField^>(MainPanel->Controls[i * 3 + j]);

            for (int minorIndex = 0; minorIndex < majorField->Controls->Count; minorIndex++) {
                SudokuMiniorField^ minorField = dynamic_cast<SudokuMiniorField^>(majorField->Controls[minorIndex]);

                for (int fieldIndex = 0; fieldIndex < minorField->GetFields()->Length; fieldIndex++) {
                    SudokuField^ field = minorField->GetField(fieldIndex);

                    int globalRow = i * 3 + (minorIndex / 3);
                    int globalCol = j * 3 + (minorIndex % 3);

                    if (sudokuFieldsGlobal[globalRow, globalCol]->GetValue() != 0)
                    {
                        field->SetValueInt(sudokuFieldsGlobal[globalRow, globalCol]->GetValue());
                    }
                }
            }
        }
    }

    if (MessageBox::Show("Sudoku has been solved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK)
    {
        Application::Restart();
    }
}

bool ButtonFillSudoku::FillSudokuStep(array<SudokuField^, 2>^ sudokuFieldsGlobal)
{
    int row = 0, col = 0;

    if (!FindEmptyLocation(sudokuFieldsGlobal, row, col))
     return true;

    for (int num = 1; num <= 9; num++)
    {
        if (IsValidFill(sudokuFieldsGlobal, row, col, num))
        {
            sudokuFieldsGlobal[row, col]->SetValue(num, sudokuFieldsGlobal, row, col);

            if (FillSudokuStep(sudokuFieldsGlobal))
                return true; 

            sudokuFieldsGlobal[row, col]->SetValue(0, sudokuFieldsGlobal, row, col);
        }
    }

    return false;
}

bool ButtonFillSudoku::FindEmptyLocation(array<SudokuField^, 2>^ sudokuFieldsGlobal, int% row, int% col)
{
    for (int r = 0; r < 9; r++)
    {
        for (int c = 0; c < 9; c++)
        {
            if (!sudokuFieldsGlobal[r, c]->GetLocked() && sudokuFieldsGlobal[r, c]->GetValue() == 0)
            {
                row = r;
                col = c;
                return true; 
            }
        }
    }
    return false;
}

bool ButtonFillSudoku::IsValidFill(array<SudokuField^, 2>^ sudokuFieldsGlobal, int% row, int% col, int value)
{
    for (int i = 0; i < 9; i++)
    {
        if (i != col && sudokuFieldsGlobal[row, i]->GetValue() == value)
            return false;

        if (i != row && sudokuFieldsGlobal[i, col]->GetValue() == value)
            return false;
    }

    int startRow = row / 3 * 3;
    int startCol = col / 3 * 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((startRow + i != row || startCol + j != col) &&
                sudokuFieldsGlobal[startRow + i, startCol + j]->GetValue() == value)
            {
                return false;
            }
        }
    }

    return true;
}

