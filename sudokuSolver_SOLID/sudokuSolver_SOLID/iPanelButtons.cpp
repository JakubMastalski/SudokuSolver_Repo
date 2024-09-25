#include "iPanelButtons.h"



 IPanelButtons::IPanelButtons()
{
    this->BackColor = Color::Black;
    this->Font = gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold);
    this->Size = System::Drawing::Size(227, 54);
    this->UseVisualStyleBackColor = false;
    this->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
    this->Cursor = System::Windows::Forms::Cursors::Hand;

    this->FlatAppearance->BorderColor = Color::White;
    this->FlatAppearance->BorderSize = 2;
    this->FlatAppearance->MouseDownBackColor = Color::White;
    this->FlatAppearance->MouseOverBackColor = Color::White;
}


 void IPanelButtons::StartButton_Click(System::Object^ sender, System::EventArgs^ e)
 {
     
 }

 void IPanelButtons::FillSudokuButton_Click(System::Object^ sender, System::EventArgs^ e)
 {
    
 }

 void IPanelButtons::RestartButton_Click(System::Object^ sender, System::EventArgs^ e)
 {
     
 }

 void IPanelButtons::HideButton_Click(System::Object^ sender, System::EventArgs^ e)
 {
    
 }

 void IPanelButtons::ShowButton_Click(System::Object^ sender, System::EventArgs^ e)
 {
     
 }

 void IPanelButtons::ExitButton_Click(System::Object^ sender, System::EventArgs^ e)
 {
     Application::Exit();
 }