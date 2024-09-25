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


 void IPanelButtons::StartButton_Click(array<SudokuField^, 2>^ fieldsSudoku)
 {
     
 }

 void IPanelButtons::FillSudokuButton_Click()
 {
    
 }

 void IPanelButtons::RestartButton_Click()
 {
     Application::Restart();
 }

 void IPanelButtons::HideButton_Click(Panel^ menuOptionsPanel, Button^ showButton)
 {
    
 }

 void IPanelButtons::ShowButton_Click(Panel^ menuOptionsPanel, Button^ hideButton)
 {
     
 }

 void IPanelButtons::ExitButton_Click()
 {
     Application::Exit();
 }