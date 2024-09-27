#include "ButtonStart.h"

void ButtonStart::StartButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel)
{
    this->Visible = false;
    this->Enabled = false;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            SudokuMajorField^ majorField = dynamic_cast<SudokuMajorField^>(MainPanel->Controls[i * 3 + j]);

            for (int minorIndex = 0; minorIndex < majorField->Controls->Count; minorIndex++) {
                SudokuMiniorField^ minorField = dynamic_cast<SudokuMiniorField^>(majorField->Controls[minorIndex]);

                for (int fieldIndex = 0; fieldIndex < minorField->GetFields()->Length; fieldIndex++) {
                    SudokuField^ field = minorField->GetField(fieldIndex);

                    int globalRow = i * 3 + (minorIndex / 3);
                    int globalCol = j * 3 + (minorIndex % 3);


                    fieldsSudoku[globalRow, globalCol] = field;
                    field->ClearValue(fieldsSudoku);

                    AddNumbersToBoard(fieldsSudoku);
                }
            }
        }
    }
    this->Visible = true;
    this->Enabled = true;
}

void ButtonStart::AddNumbersToBoard(array<SudokuField^, 2>^ fieldsSudoku)
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int value = (rand() % 9) + 1;
            if (IsValid(fieldsSudoku, i, j, 5))
            {
                fieldsSudoku[i, j]->SetValue(5, fieldsSudoku, i, j);
            }
            if (IsValid(fieldsSudoku, i, j, 4))
            {
                fieldsSudoku[i, j]->SetValue(4, fieldsSudoku, i, j);
            }
        }
    }
}

bool ButtonStart::IsValid(array<SudokuField^, 2>^ fieldsSudoku, int row, int col, int value)
{
    for (int i = 0; i < 9; i++)
    {
        if (fieldsSudoku[row, i]->GetValue() == value)
            return false;
    }

    for (int i = 0; i < 9; i++)
    {
        if (fieldsSudoku[i, col]->GetValue() == value)
            return false;
    }

    int startRow = row / 3 * 3;
    int startCol = col / 3 * 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (fieldsSudoku[startRow + i, startCol + j]->GetValue() == value)
                return false;
        }
    }

    return true;
}