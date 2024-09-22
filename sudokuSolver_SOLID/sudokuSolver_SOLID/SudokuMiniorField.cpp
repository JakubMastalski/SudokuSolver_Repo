#include "SudokuMiniorFiled.h"

SudokuMiniorField::SudokuMiniorField(int row, int col) {
    this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
    this->Size = System::Drawing::Size(42, 42);
    this->Location = System::Drawing::Point(col * 45 + 3, row * 45 + 3);

    fields = gcnew array<SudokuField^>(9);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int index = i * 3 + j;  // Przekszta�cenie wsp�rz�dnych (i, j) na indeks tablicy
            SudokuField^ sudokuField = gcnew SudokuField();
            sudokuField->Location = System::Drawing::Point(j * 45 + 6, i * 45 + 3);
            sudokuField->SetValue(4);  // Przyk�adowa warto��
            this->Controls->Add(sudokuField);
            fields[index] = sudokuField;  // Przechowywanie w tablicy
        }
    }
}

array<SudokuField^>^ SudokuMiniorField::GetFields() {
    return fields;
}

SudokuField^ SudokuMiniorField::GetField(int index) {
    if (index >= 0 && index < fields->Length) {
        return fields[index];
    }
    return nullptr;
}

