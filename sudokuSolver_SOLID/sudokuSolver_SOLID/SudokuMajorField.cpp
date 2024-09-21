#include "SudokuMajorField.h"


SudokuMajorField::SudokuMajorField(int startX, int startY) {
    this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
    this->Size = System::Drawing::Size(140, 140); 
    this->Location = System::Drawing::Point(startX, startY);

    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            SudokuMiniorField^ minorField = gcnew SudokuMiniorField(i, j);
            minorField->Location = System::Drawing::Point(j * 45, i * 45);
            this->Controls->Add(minorField);
        }
    }
}