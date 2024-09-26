#pragma once
#include "SudokuField.h"
#include "SudokuMajorField.h"
#include "iPanelButtons.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class PanelButtonsSecondary : public IPanelButtons
{
public:
    void RestartButton_Click();
    void HideButton_Click(Panel^ menuOptionsPanel, Button^ showButton);
    void ShowButton_Click(Panel^ menuOptionsPanel, Button^ hideButton);
    void ExitButton_Click();
};

