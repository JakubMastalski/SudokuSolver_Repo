#pragma once
ref class SudokuField :
    public System::Windows::Forms::Label
{
public:
    SudokuField();
    void SetValue(int value, array<SudokuField^, 2>^ fieldsSudoku, int row, int column);
    void ClearValue();
};

