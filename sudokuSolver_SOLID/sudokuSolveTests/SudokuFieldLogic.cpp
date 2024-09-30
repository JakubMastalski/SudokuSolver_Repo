#include "SudokuFieldLogic.h"

SudokuFieldLogic::SudokuFieldLogic() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            grid[i][j] = 0;
        }
    }
}

void SudokuFieldLogic::SetValue(int value, int row, int column) {
    if (row >= 0 && row < 9 && column >= 0 && column < 9) {
        grid[row][column] = value;
    }
}

int SudokuFieldLogic::GetValue(int row, int column) {
    if (row >= 0 && row < 9 && column >= 0 && column < 9) {
        return grid[row][column];
    }
    return 0; 
}

void SudokuFieldLogic::ClearValue() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            grid[i][j] = 0;
        }
    }
}