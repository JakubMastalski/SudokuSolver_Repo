#pragma once
#include "iPanelButtons.h"

ref class ButtonStart :
    public IPanelButtons
{
public:
    void StartButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel);
    bool IsValid(array<SudokuField^, 2>^ fieldsSudoku, int row, int col, int value);
};

