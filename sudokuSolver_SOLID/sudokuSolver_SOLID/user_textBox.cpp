#include "user_textBox.h"

user_textBox::user_textBox(int row, int col)
{
    this->Size = System::Drawing::Size(40, 40); 
    this->Location = System::Drawing::Point(40 * col, 40 * row);
    this->Visible = true;
}