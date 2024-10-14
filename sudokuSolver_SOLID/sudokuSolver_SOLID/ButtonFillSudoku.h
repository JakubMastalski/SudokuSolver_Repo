#pragma once
#include "iPanelButtons.h"
#include  "ButtonStart.h"
#include "SudokuField.h"


ref class ButtonFillSudoku : public IPanelButtons
{
private:
    int currentRow = -1;  
    int currentCol = -1; 
    array<SudokuField^, 2>^ sudokuFieldsGlobal;
public:
    void FillSudokuButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel);
    bool FillSudokuStep(array<SudokuField^, 2>^ fieldsSudoku);
    bool FindEmptyLocation(array<SudokuField^, 2>^ fieldsSudoku, int% row, int% col);
    bool IsValidFill(array<SudokuField^, 2>^ fieldsSudoku, int% row, int% col, int value);
};

