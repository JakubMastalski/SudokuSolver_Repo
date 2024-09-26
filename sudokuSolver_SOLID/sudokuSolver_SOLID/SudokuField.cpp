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


void SudokuField::ClearValue(array<SudokuField^, 2>^ fieldsSudoku) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (fieldsSudoku[row, col] != nullptr) { 
                fieldsSudoku[row, col]->Text = "";
            }
        }
    }
}

int SudokuField::GetValue()
{
    if (this != nullptr)
    {
        if (this->Text == "" || this->Text == "0") {
            return 0;
        }
        return System::Int32::Parse(this->Text);
    }
    return 0;
}