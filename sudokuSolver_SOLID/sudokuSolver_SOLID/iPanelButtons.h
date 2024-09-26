#pragma once
#include "SudokuField.h"
#include "SudokuMajorField.h"
#include <random>
#include <ctime>


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;


ref class  IPanelButtons :
    public System::Windows::Forms::Button
{
public:
    IPanelButtons();
public:
    void FillSudokuButton_Click();
};

