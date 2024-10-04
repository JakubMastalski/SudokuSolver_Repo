#pragma once
ref class SudokuField :
    public System::Windows::Forms::Label
{
private:

public:
    SudokuField();
    void SetValue(int value, array<SudokuField^, 2>^ fieldsSudoku, int row, int column);
    int GetValue();
    void SetValueOne(int value);
    void ClearValue(array<SudokuField^, 2>^ fieldsSudoku);
};

