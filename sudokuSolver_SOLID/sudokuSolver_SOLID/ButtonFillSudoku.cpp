#include "ButtonFillSudoku.h"

void ButtonFillSudoku::FillSudokuButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel, Timer^ fillTimer)
{
    this->Visible = false;
    this->Enabled = false;

    currentRow = 0;
    currentCol = 0;

    sudokuFieldsGlobal = fieldsSudoku;

    fillTimer->Interval = 10;
    fillTimer->Tick += gcnew EventHandler(this, &ButtonFillSudoku::OnTick);

    fillTimer->Start();
}

void ButtonFillSudoku::OnTick(Object^ sender, EventArgs^ e)
{
    // Upewnij siê, ¿e fieldsSudoku jest odpowiednio przekazywane
    if (FillSudokuStep(sudokuFieldsGlobal))
    {
        Console::WriteLine("Sudoku solved");
        globalFillTimer->Stop();
        UpdateUI(sudokuFieldsGlobal);
        this->Visible = true;
        this->Enabled = true;
    }
}

bool ButtonFillSudoku::FillSudokuStep(array<SudokuField^, 2>^ fieldsSudoku)
{
    if (!FindEmptyLocation(fieldsSudoku, currentRow, currentCol))
        return true;

    for (int num = 1; num <= 9; num++)
    {
        if (IsValidFill(fieldsSudoku, currentRow, currentCol, num))
        {
            fieldsSudoku[currentRow, currentCol]->SetValue(num, fieldsSudoku, currentRow, currentCol);
            return false; // Kontynuuj wype³nianie
        }
    }

    return false;
}

bool ButtonFillSudoku::FindEmptyLocation(array<SudokuField^, 2>^ fieldsSudoku, int% row, int% col)
{
    for (row = currentRow; row < 9; row++)
    {
        for (col = (row == currentRow) ? currentCol : 0; col < 9; col++)
        {
            if (fieldsSudoku[row, col]->GetValue() == 0 || fieldsSudoku[row, col]->Text == "")
                return true;
        }
    }
    return false;
}

bool ButtonFillSudoku::IsValidFill(array<SudokuField^, 2>^ fieldsSudoku, int% row, int% col, int value) // Zmieniona na IsValid
{
    for (int i = 0; i < 9; i++)
    {
        if (fieldsSudoku[row, i]->GetValue() == value || fieldsSudoku[i, col]->GetValue() == value)
            return false;
    }

    int startRow = row / 3 * 3;
    int startCol = col / 3 * 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (fieldsSudoku[startRow + i, startCol + j]->GetValue() == value)
                return false;
        }
    }

    return true;
}

void ButtonFillSudoku::UpdateUI(array<SudokuField^, 2>^ fieldsSudoku)
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            fieldsSudoku[i, j]->SetValue(fieldsSudoku[i, j]->GetValue(), fieldsSudoku, i, j);
        }
    }
}