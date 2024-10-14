#pragma once

using namespace System;
using namespace System::Windows::Forms;

ref class user_textBox :
    public System::Windows::Forms::TextBox
{
public:
   int row = -1;
   int column = -1;
public:
    user_textBox(int row, int column);
    void BoxColor(int row, int column);
};

