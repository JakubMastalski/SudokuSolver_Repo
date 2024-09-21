#pragma once
#include "IBoard.h"
#include "SudokuField.h"
#include "vector"

ref class Board : public IBoard
{
private:
	array<int, 2>^ board;
    array<SudokuField^>^ fields;
public:
    Board();

    virtual int getValue(int row, int col) override;
    virtual void setValue(int row, int col, int value) override;
    virtual bool isEmpty(int row, int col) override;
public:
    array<SudokuField^>^ getFields();
};



