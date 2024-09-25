#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;


ref class  IPanelButtons :
    public System::Windows::Forms::Button
{
public:
    IPanelButtons();
public:
    void StartButton_Click(System::Object^ sender, System::EventArgs^ e);
    void FillSudokuButton_Click(System::Object^ sender, System::EventArgs^ e);
    void RestartButton_Click(System::Object^ sender, System::EventArgs^ e);
    void HideButton_Click(System::Object^ sender, System::EventArgs^ e);
    void ShowButton_Click(System::Object^ sender, System::EventArgs^ e);
    void ExitButton_Click(System::Object^ sender, System::EventArgs^ e);
    
};

