#pragma once
#include "SudokuField.h"

ref class SudokuMiniorField :
    public System::Windows::Forms::Panel
{
private:
    array<SudokuField^>^ fields;
public:
    SudokuMiniorField(int row, int col);
    array<SudokuField^>^ GetFields();
    SudokuField^ GetField(int index);
};

