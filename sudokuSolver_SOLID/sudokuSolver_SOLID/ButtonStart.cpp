#include "ButtonStart.h"

void ButtonStart::StartButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel)
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            SudokuMajorField^ majorField = dynamic_cast<SudokuMajorField^>(MainPanel->Controls[i * 3 + j]);

            for (int minorIndex = 0; minorIndex < majorField->Controls->Count; minorIndex++) {
                SudokuMiniorField^ minorField = dynamic_cast<SudokuMiniorField^>(majorField->Controls[minorIndex]);

                for (int fieldIndex = 0; fieldIndex < minorField->GetFields()->Length; fieldIndex++) {
                    SudokuField^ field = minorField->GetField(fieldIndex);

                    int globalRow = i * 3 + (minorIndex / 3);
                    int globalCol = j * 3 + (minorIndex % 3);

                    field->ClearValue();

                    fieldsSudoku[globalRow, globalCol] = field;


                    fieldsSudoku[3, 2]->SetValue(5, fieldsSudoku, 3, 2);
                }
            }
        }
    }
}