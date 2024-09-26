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


 void IPanelButtons::StartButton_Click(array<SudokuField^, 2>^ fieldsSudoku,Panel^ MainPanel)
 {
     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
             SudokuMajorField^ majorField = dynamic_cast<SudokuMajorField^>(MainPanel->Controls[i * 3 + j]);

             for (int minorIndex = 0; minorIndex < majorField->Controls->Count; minorIndex++) {
                 SudokuMiniorField^ minorField = dynamic_cast<SudokuMiniorField^>(majorField->Controls[minorIndex]);

                 for (int fieldIndex = 0; fieldIndex < minorField->GetFields()->Length; fieldIndex++) {
                     SudokuField^ field = minorField->GetField(fieldIndex);

                     int globalRow = i * 3 + (minorIndex / 3);
                     int globalCol = j * 3 + (minorIndex % 3);

                     field->ClearValue();

                     fieldsSudoku[globalRow, globalCol] = field;


                     fieldsSudoku[3, 2]->SetValue(5, fieldsSudoku, 3, 2);
                 }
             }
         }
     }
 }

 void IPanelButtons::FillSudokuButton_Click()
 {
    
 }
