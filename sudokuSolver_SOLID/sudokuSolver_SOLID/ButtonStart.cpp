#include "ButtonStart.h"



void ButtonStart::StartButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel)
{

    this->Visible = false;
    this->Enabled = false;

    array<SudokuField^, 2>^ fieldsSudokuStart = gcnew array<SudokuField^, 2>(9, 9);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
           fieldsSudokuStart[i, j] = gcnew SudokuField();
           fieldsSudokuStart[i, j]->SetLocked(false);
           fieldsSudoku[i, j]->SetLocked(false);
        }
    }

    AddNumbersToBoard(fieldsSudokuStart);

    for (int r = 0; r < 9; r++)
    {
        for (int c = 0; c < 9; c++)
        {
            int value = fieldsSudoku[r, c]->GetValue();
            fieldsSudoku[r, c]->SetValue(value, fieldsSudoku,r, c);
            if(value > 0)fieldsSudoku[r, c]->SetLocked(true);
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            SudokuMajorField^ majorField = dynamic_cast<SudokuMajorField^>(MainPanel->Controls[i * 3 + j]);

            if (majorField == nullptr) continue;

            for (int minorIndex = 0; minorIndex < majorField->Controls->Count; minorIndex++) {
                SudokuMiniorField^ minorField = dynamic_cast<SudokuMiniorField^>(majorField->Controls[minorIndex]);

                if (minorField == nullptr) continue;

                for (int fieldIndex = 0; fieldIndex < minorField->GetFields()->Length; fieldIndex++) {
                    SudokuField^ field = minorField->GetField(fieldIndex);
                
                    field->SetValueInt(0);
                    field->Clear0();
                
                    int globalRow = i * 3 + (minorIndex / 3);
                    int globalCol = j * 3 + (minorIndex % 3);

                    if (fieldsSudokuStart[globalRow, globalCol]->GetValue() != 0)
                    {
                        field->SetValueInt(fieldsSudokuStart[globalRow, globalCol]->GetValue());
                        field->SetLocked(true);
                    }

                }
            }
        }
    }

    this->Visible = true;
    this->Enabled = true;
}

void ButtonStart::AddNumbersToBoard(array<SudokuField^, 2>^ fieldsSudokuStart)
{
    int numbersToInsert = 14;
    srand(static_cast<unsigned int>(time(0)));

    while (numbersToInsert > 0) {
        int i = rand() % 9;
        int j = rand() % 9;

        if (fieldsSudokuStart[i, j]->GetValue() == 0) {
            int value = (rand() % 9) + 1;
            bool isValidValue = false;

            for (int attempts = 0; attempts < 9; attempts++) {
                if (IsValid(fieldsSudokuStart, i, j, value)) {
                    fieldsSudokuStart[i, j]->SetValue(value, fieldsSudokuStart, i, j);
                    numbersToInsert--;
                    isValidValue = true;
                    break;
                }

                value = (value % 9) + 1;
            }

            if (!isValidValue) {
                continue;
            }
        }
    }
}

bool ButtonStart::IsValid(array<SudokuField^, 2>^ fieldsSudokuStart, int row, int col, int value)
{
    for (int i = 0; i < 9; i++)
    {
        if (fieldsSudokuStart[row, i]->GetValue() == value)
            return false;
    }

    for (int i = 0; i < 9; i++)
    {
        if (fieldsSudokuStart[i, col]->GetValue() == value)
            return false;
    }

    int startRow = row / 3 * 3;
    int startCol = col / 3 * 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (fieldsSudokuStart[startRow + i, startCol + j]->GetValue() == value)
                return false;
        }
    }

    return true;
}