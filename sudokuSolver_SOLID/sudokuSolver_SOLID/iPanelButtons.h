#pragma once
#include "SudokuField.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;


ref class  IPanelButtons :
    public System::Windows::Forms::Button
{
public:
    IPanelButtons();
public:
    void StartButton_Click(array<SudokuField^, 2>^ fieldsSudoku);
    void FillSudokuButton_Click();
    void RestartButton_Click();
    void HideButton_Click(Panel^ menuOptionsPanel, Button^ showButton);
    void ShowButton_Click(Panel^ menuOptionsPanel, Button^ hideButton);
    void ExitButton_Click();
    
};

