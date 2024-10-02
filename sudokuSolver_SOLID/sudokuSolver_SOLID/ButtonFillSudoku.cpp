#include "ButtonFillSudoku.h"


    sudokuFieldsGlobal = fieldsSudoku;
    globalFillTimer = fillTimer;

    currentRow = 0;
    currentCol = 0;

    fillTimer->Interval = 1;
    fillTimer->Tick += gcnew EventHandler(this, &ButtonFillSudoku::OnTick);

    fillTimer->Start();
}

void ButtonFillSudoku::OnTick(Object^ sender, EventArgs^ e)
{
    if (FillSudokuStep(sudokuFieldsGlobal, currentRow, currentCol)) 
    {
        globalFillTimer->Stop();
        UpdateUI();
        this->Visible = true;
        this->Enabled = true;
    }
}

bool ButtonFillSudoku::FillSudokuStep(array<SudokuField^, 2>^ fieldsSudoku, int row, int col)
{
    int emptyRow = -1, emptyCol = -1;

    if (!FindEmptyLocation(emptyRow, emptyCol))
        return true; 

    for (int num = 1; num <= 9; num++)
    {
        if (num == 2)MessageBox::Show("EE");
        if (IsValid(emptyRow, emptyCol, num))
        {
            fieldsSudoku[emptyRow, emptyCol]->SetValue(num, fieldsSudoku, emptyRow, emptyCol);
            row = emptyRow;
            col = emptyCol;
            return false;
        }
    }

    return false;
}

bool ButtonFillSudoku::FindEmptyLocation(int& row, int& col)
{
    for (row = 0; row < 9; row++)
    {
        for (col = 0; col < 9; col++)
        {
            if (sudokuFieldsGlobal[row, col]->GetValue() == 0 || sudokuFieldsGlobal[row, col]->Text == "")
                return true;
        }
    }
    return false;
}

bool ButtonFillSudoku::IsValid(int& row, int& col, int& value)
{
    for (int i = 0; i < 9; i++)
    {
        if (sudokuFieldsGlobal[row, i]->GetValue() == value || sudokuFieldsGlobal[i, col]->GetValue() == value)
            return false;
    }

    int startRow = row / 3 * 3;
    int startCol = col / 3 * 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (sudokuFieldsGlobal[startRow + i, startCol + j]->GetValue() == value)
                return false;
        }
    }

    return true;
}

void ButtonFillSudoku::UpdateUI()
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            sudokuFieldsGlobal[i, j]->SetValue(sudokuFieldsGlobal[i, j]->GetValue(), sudokuFieldsGlobal, i, j);
        }
    }
}