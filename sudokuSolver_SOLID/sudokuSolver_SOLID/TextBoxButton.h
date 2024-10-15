#pragma once
#include "iPanelButtons.h"
#include "user_textBox.h"

ref class TextBoxButton :
    public IPanelButtons
{
public:
    void TextBoxButton_Click(array<SudokuField^, 2>^ fieldsSudoku, array<user_textBox^, 2>^ textBoxesSudoku, Panel^ MainPanel);
};

