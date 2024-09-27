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
    // Liczniki dla liczb od 1 do 9
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
    int count7 = 0;
    int count8 = 0;
    int count9 = 0;

    // Przechodzimy przez planszê
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            // Wstawiamy liczbê 1, jeœli jeszcze nie wstawiliœmy 3 razy i miejsce jest zgodne z zasadami Sudoku
            if (count1 < 3 && IsValid(fieldsSudoku, i, j, 1)) {
                fieldsSudoku[i, j]->SetValue(1, fieldsSudoku, i, j);
                count1++;
            }

            // Wstawiamy liczbê 2
            else if (count2 < 3 && IsValid(fieldsSudoku, i, j, 2)) {
                fieldsSudoku[i, j]->SetValue(2, fieldsSudoku, i, j);
                count2++;
            }

            // Wstawiamy liczbê 3
            else if (count3 < 3 && IsValid(fieldsSudoku, i, j, 3)) {
                fieldsSudoku[i, j]->SetValue(3, fieldsSudoku, i, j);
                count3++;
            }

            // Wstawiamy liczbê 4
            else if (count4 < 3 && IsValid(fieldsSudoku, i, j, 4)) {
                fieldsSudoku[i, j]->SetValue(4, fieldsSudoku, i, j);
                count4++;
            }

            // Wstawiamy liczbê 5
            else if (count5 < 3 && IsValid(fieldsSudoku, i, j, 5)) {
                fieldsSudoku[i, j]->SetValue(5, fieldsSudoku, i, j);
                count5++;
            }

            // Wstawiamy liczbê 6
            else if (count6 < 3 && IsValid(fieldsSudoku, i, j, 6)) {
                fieldsSudoku[i, j]->SetValue(6, fieldsSudoku, i, j);
                count6++;
            }

            // Wstawiamy liczbê 7
            else if (count7 < 3 && IsValid(fieldsSudoku, i, j, 7)) {
                fieldsSudoku[i, j]->SetValue(7, fieldsSudoku, i, j);
                count7++;
            }

            // Wstawiamy liczbê 8
            else if (count8 < 3 && IsValid(fieldsSudoku, i, j, 8)) {
                fieldsSudoku[i, j]->SetValue(8, fieldsSudoku, i, j);
                count8++;
            }

            // Wstawiamy liczbê 9
            else if (count9 < 3 && IsValid(fieldsSudoku, i, j, 9)) {
                fieldsSudoku[i, j]->SetValue(9, fieldsSudoku, i, j);
                count9++;
            }

            // Jeœli wszystkie liczby od 1 do 9 zosta³y wstawione po 3 razy, koñczymy pêtlê
            if (count1 >= 3 && count2 >= 3 && count3 >= 3 && count4 >= 3 && count5 >= 3 &&
                count6 >= 3 && count7 >= 3 && count8 >= 3 && count9 >= 3) {
                return;
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