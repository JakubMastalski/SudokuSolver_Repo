#include "SudokuMiniorFiled.h"

SudokuMiniorField::SudokuMiniorField(int row, int col) {
    this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
    this->Size = System::Drawing::Size(42, 42);
    this->Location = System::Drawing::Point(col * 45 + 3, row * 45 + 3);


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            SudokuField^ sudokuField = gcnew SudokuField();
            sudokuField->Location = System::Drawing::Point(j * 45+6, i * 45+3);
            sudokuField->SetValue(4);
            this->Controls->Add(sudokuField);
        }
    }
}

array<SudokuField^>^ SudokuMiniorField::GetFields() {
    return fields;
}

