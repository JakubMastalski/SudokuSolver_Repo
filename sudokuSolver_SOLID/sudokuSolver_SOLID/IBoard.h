#pragma once
#include <vector>
using namespace System;

ref class IBoard abstract
{
public:
    virtual int getValue(int row, int col) = 0;
    virtual void setValue(int row, int col, int value) = 0;
    virtual bool isEmpty(int row, int col) = 0;
    //virtual bool isSafe(int row, int col, int num) = 0;
};

