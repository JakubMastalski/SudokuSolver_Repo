#include "ButtonStart.h"



void ButtonStart::StartButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel,bool isFilled)
{

    this->Visible = false;
    this->Enabled = false;

    array<SudokuField^, 2>^ fieldsSudokuStart = gcnew array<SudokuField^, 2>(9, 9);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (fieldsSudoku[i, j] != nullptr)
            {
                fieldsSudokuStart[i, j] = fieldsSudoku[i, j];
            }
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (fieldsSudokuStart[i, j] != nullptr)
            {
                fieldsSudokuStart[i, j]->ClearValue(fieldsSudokuStart);
                fieldsSudokuStart[i, j]->SetLocked(false);
                //fieldsSudoku[i, j]->ClearValue(fieldsSudoku);
                //fieldsSudoku[i, j]->SetLocked(false);
            }
        }
    }

    AddNumbersToBoard(fieldsSudokuStart);

    for (int r = 0; r < 9; r++)
    {
        for (int c = 0; c < 9; c++)
        {
            fieldsSudoku[r, c]->SetValue(fieldsSudokuStart[r, c]->GetValue(), fieldsSudoku,r, c);
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

void ButtonStart::AddNumbersToBoard(array<SudokuField^, 2>^ fieldsSudoku)
{
    int numbersToInsert = 24;
    srand(static_cast<unsigned int>(time(0)));

    while (numbersToInsert > 0) {
        int i = rand() % 9;
        int j = rand() % 9;

        if (fieldsSudoku[i, j]->GetValue() == 0) {
            int value = (rand() % 9) + 1;
            bool isValidValue = false;

            for (int attempts = 0; attempts < 9; attempts++) {
                if (IsValid(fieldsSudoku, i, j, value)) {
                    fieldsSudoku[i, j]->SetValue(value, fieldsSudoku, i, j);
                    fieldsSudoku[i, j]->SetLocked(true);
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

void ButtonStart::RemoveInvalidNumbers(array<SudokuField^, 2>^ fieldsSudoku)
{
    RemoveInvalidNumbersFromRows(fieldsSudoku);
    RemoveInvalidNumbersFromColumns(fieldsSudoku);
    RemoveInvalidNumbersFromBoxes(fieldsSudoku);
}

void ButtonStart::RemoveInvalidNumbersFromRows(array<SudokuField^, 2>^ fieldsSudoku)
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int currentValue = fieldsSudoku[i, j]->GetValue();
            if (currentValue != 0 && !IsValid(fieldsSudoku, i, j, currentValue)) {
                fieldsSudoku[i, j]->SetValue(0, fieldsSudoku, i, j);
            }
        }
    }
}

void ButtonStart::RemoveInvalidNumbersFromColumns(array<SudokuField^, 2>^ fieldsSudoku)
{
    for (int j = 0; j < 9; j++) {
        for (int i = 0; i < 9; i++) {
            int currentValue = fieldsSudoku[i, j]->GetValue();
            if (currentValue != 0 && !IsValid(fieldsSudoku, i, j, currentValue)) {
                fieldsSudoku[i, j]->SetValue(0, fieldsSudoku, i, j);
            }
        }
    }
}

void ButtonStart::RemoveInvalidNumbersFromBoxes(array<SudokuField^, 2>^ fieldsSudoku)
{
    for (int boxRow = 0; boxRow < 3; boxRow++) {
        for (int boxCol = 0; boxCol < 3; boxCol++) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int currentRow = boxRow * 3 + i;
                    int currentCol = boxCol * 3 + j;
                    int currentValue = fieldsSudoku[currentRow, currentCol]->GetValue();
                    if (currentValue != 0 && !IsValid(fieldsSudoku, currentRow, currentCol, currentValue)) {
                        fieldsSudoku[currentRow, currentCol]->SetValue(0, fieldsSudoku, currentRow, currentCol);
                    }
                }
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