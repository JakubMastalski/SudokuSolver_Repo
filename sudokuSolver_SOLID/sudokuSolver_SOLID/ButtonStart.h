#pragma once
#include "iPanelButtons.h"

ref class ButtonStart :
    public IPanelButtons
{
public:
    void StartButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel);
};

