#pragma once
#include "SudokuField.h"

ref class SudokuMiniorField :
    public System::Windows::Forms::Panel
{
public:
    array<SudokuField^>^ fields;
public:
    SudokuMiniorField(int row, int col);
    array<SudokuField^>^ GetFields();
    SudokuField^ GetField(int index);
};

