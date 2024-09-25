#include "SudokuField.h"

SudokuField::SudokuField() {
    this->Size = System::Drawing::Size(30, 30);
    this->Location = System::Drawing::Point(5, 5);
    this->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    this->Font = gcnew System::Drawing::Font(L"Segoe UI", 15.2F, System::Drawing::FontStyle::Bold);
}

void SudokuField::SetValue(int value, array<SudokuField^, 2>^ fieldsSudoku, int row, int column) {
    if (fieldsSudoku[row, column] != nullptr) {
        fieldsSudoku[row, column]->Text = value == 0 ? "" : value.ToString();
    }
}


void SudokuField::ClearValue() {
    this->Text = "";
}