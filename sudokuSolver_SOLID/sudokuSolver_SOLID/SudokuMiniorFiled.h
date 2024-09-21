#pragma once
#include "SudokuField.h"

ref class SudokuMiniorField :
    public System::Windows::Forms::Panel
{
public:
    SudokuMiniorField(int row, int col);
    void SetFieldValue(int value);
};

