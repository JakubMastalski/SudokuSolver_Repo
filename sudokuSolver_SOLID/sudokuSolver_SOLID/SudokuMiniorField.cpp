#include "SudokuMiniorFiled.h"

SudokuMiniorField::SudokuMiniorField(int row, int col) {
    this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
    this->Size = System::Drawing::Size(42, 42);
    this->Location = System::Drawing::Point(col * 45+3, row * 45+3); 

    SudokuField^ field = gcnew SudokuField();
    field->SetValue(7);
    this->Controls->Add(field);
}

void SudokuMiniorField::SetFieldValue(int value) {
    dynamic_cast<SudokuField^>(this->Controls[0])->SetValue(value);
}