#include "user_textBox.h"

user_textBox::user_textBox(int row, int col)
{
    this->Size = System::Drawing::Size(46, 46); 
    this->Location = System::Drawing::Point((44 + 5) * col, (40 + 5) * row);
    this->TextAlign = HorizontalAlignment::Center;
    this->Visible = true;
    this->Font = gcnew System::Drawing::Font(L"Segoe UI", 12);
    this->Text = ""; 
}

void user_textBox::BoxColor(int row, int column)
{
    if ((row / 3) * 3 + (column / 3) == 0) 
    {
        this->BackColor = System::Drawing::Color::Yellow;
        this->ForeColor = System::Drawing::Color::Black;      
    }
    else if ((row / 3) * 3 + (column / 3) == 1)
    {
        this->BackColor = System::Drawing::Color::Green;
        this->ForeColor = System::Drawing::Color::Black;
    }
    else if ((row / 3) * 3 + (column / 3) == 2) 
    {
        this->BackColor = System::Drawing::Color::Blue;
        this->ForeColor = System::Drawing::Color::Black;
    }
    else if ((row / 3) * 3 + (column / 3) == 3)
    {
        this->BackColor = System::Drawing::Color::Coral;
        this->ForeColor = System::Drawing::Color::Black;
    }
    else if ((row / 3) * 3 + (column / 3) == 4) 
    {
        this->BackColor = System::Drawing::Color::Pink;
        this->ForeColor = System::Drawing::Color::Black;
    }
    else if ((row / 3) * 3 + (column / 3) == 5)
    {
        this->BackColor = System::Drawing::Color::Salmon;
        this->ForeColor = System::Drawing::Color::Black;
    }
    else if ((row / 3) * 3 + (column / 3) == 6) 
    {
        this->BackColor = System::Drawing::Color::Gray;
        this->ForeColor = System::Drawing::Color::Black;
    }
    else if ((row / 3) * 3 + (column / 3) == 7) 
    {
        this->BackColor = System::Drawing::Color::Red;
        this->ForeColor = System::Drawing::Color::Black;
    }
    else 
    {
        this->BackColor = System::Drawing::Color::Cyan;
        this->ForeColor = System::Drawing::Color::Black;
    }
}
