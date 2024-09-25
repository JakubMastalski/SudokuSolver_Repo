#include "iPanelButtons.h"



 IPanelButtons::IPanelButtons()
{
    this->BackColor = Color::Black;
    this->Font = gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold);
    this->Size = System::Drawing::Size(227, 54);
    this->UseVisualStyleBackColor = false;

    this->FlatAppearance->BorderColor = Color::White;
    this->FlatAppearance->BorderSize = 2;
    this->FlatAppearance->MouseDownBackColor = Color::White;
    this->FlatAppearance->MouseOverBackColor = Color::White;
}