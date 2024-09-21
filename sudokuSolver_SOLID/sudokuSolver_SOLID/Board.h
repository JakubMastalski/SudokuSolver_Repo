#pragma once
#include "IBoard.h"

ref class Board : public IBoard
{
private:
	array<int, 2>^ board;
public:
    Board() {
        board = gcnew array<int, 2>(9, 9);
    }

    virtual int getValue(int row, int col) override {
        return board[row, col];
    }

    virtual void setValue(int row, int col, int value) override {
        board[row, col] = value;
    }

    virtual bool isEmpty(int row, int col) override {
        return board[row, col] == 0;
    }
};



