#pragma once
#include "iPanelButtons.h"
#include <algorithm> 
#include "ButtonFillSudoku.h"
#include <vector> 

ref class ButtonStart :
    public IPanelButtons
{
public:
    void StartButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel,bool isFilled);
    bool IsValid(array<SudokuField^, 2>^ fieldsSudoku, int row, int col, int value);
    void AddNumbersToBoard(array<SudokuField^, 2>^ fieldsSudoku);
};

