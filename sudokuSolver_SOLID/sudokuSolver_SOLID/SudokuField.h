#pragma once
ref class SudokuField :
    public System::Windows::Forms::Label
{
public:
    SudokuField();
    void SetValue(int value);
    void ClearValue();
};

