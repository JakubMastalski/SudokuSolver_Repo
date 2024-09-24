#include "Board.h"


Board::Board() {
    board = gcnew array<int, 2>(9, 9);
    fields = gcnew array<SudokuField^>(81);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int index = i * 9 + j;
            fields[index] = gcnew SudokuField();
        }
    }
}
int Board::getValue(int row, int col) {
    return board[row, col];
}

void Board::setValue(int row, int col, int value) {
    board[row, col] = value;
}

bool Board::isEmpty(int row, int col) {
    return board[row, col] == 0;
}

array<SudokuField^>^ Board::getFields() {
    return fields;
}