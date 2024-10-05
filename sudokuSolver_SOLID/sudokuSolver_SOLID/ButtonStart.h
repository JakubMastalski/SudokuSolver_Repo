#pragma once
#include "iPanelButtons.h"
#include <algorithm> 
#include "ButtonFillSudoku.h"
#include <vector> 

ref class ButtonStart :
    public IPanelButtons
{
public:
    void StartButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel);
    bool IsValid(array<SudokuField^, 2>^ fieldsSudoku, int row, int col, int value);
    void RemoveInvalidNumbers(array<SudokuField^, 2>^ fieldsSudoku);
    void AddNumbersToBoard(array<SudokuField^, 2>^ fieldsSudoku);
private:
    void RemoveInvalidNumbersFromRows(array<SudokuField^, 2>^ fieldsSudoku);
    void RemoveInvalidNumbersFromColumns(array<SudokuField^, 2>^ fieldsSudoku);
    void RemoveInvalidNumbersFromBoxes(array<SudokuField^, 2>^ fieldsSudoku);
};

