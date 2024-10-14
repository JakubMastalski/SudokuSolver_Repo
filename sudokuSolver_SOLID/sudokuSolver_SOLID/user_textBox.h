#pragma once

using namespace System;
using namespace System::Windows::Forms;

ref class user_textBox :
    public System::Windows::Forms::TextBox
{
public:
    user_textBox(int row, int column);
};

