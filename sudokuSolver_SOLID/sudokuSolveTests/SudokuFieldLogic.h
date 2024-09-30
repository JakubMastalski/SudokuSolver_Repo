#pragma once
#include "array"

class SudokuFieldLogic
{ 
public:
    SudokuFieldLogic();
    void SetValue(int value, int row, int column);
    int GetValue(int row, int column);
    void ClearValue();
    private:
        int grid[9][9];
};

