#pragma once

ref class SudokuField :
    public System::Windows::Forms::Label
{
public:
    bool IsLocked = false;
    void SetLocked(bool locked);
public:
    SudokuField();
    void SetValue(int value, array<SudokuField^, 2>^ fieldsSudoku, int row, int column);
    void Clear0();
    int GetValue();
    void SetValueInt(int value);
    bool GetLocked();
    void ClearValue(array<SudokuField^, 2>^ fieldsSudoku);
    void SetValueString(System::String^ text);
};

