#include "ButtonFillSudoku.h"

void ButtonFillSudoku::FillSudokuButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel, Timer^ fillTimer)
{
    this->Visible = false;
    this->Enabled = false;

    globalFillTimer = gcnew System::Windows::Forms::Timer();

    currentRow = 0;
    currentCol = 0;

    sudokuFieldsGlobal = gcnew array<SudokuField^, 2>(9, 9);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (fieldsSudoku[i, j] != nullptr)
            {
                sudokuFieldsGlobal[i, j] = fieldsSudoku[i, j];
            }
        }
    }

    fillTimer->Interval = 100;
    fillTimer->Tick += gcnew EventHandler(this, &ButtonFillSudoku::OnTick);
    fillTimer->Start();
}

void ButtonFillSudoku::OnTick(Object^ sender, EventArgs^ e)
{
    if (FillSudokuStep(sudokuFieldsGlobal))
    {
        globalFillTimer->Stop();
        UpdateUI(sudokuFieldsGlobal);
        this->Visible = true;
        this->Enabled = true;
    }
}

bool ButtonFillSudoku::FillSudokuStep(array<SudokuField^, 2>^ fieldsSudoku)
{
    if (!FindEmptyLocation(sudokuFieldsGlobal, currentRow, currentCol))
        return true;

    for (int num = 1; num <= 9; num++)
    {
        if (IsValidFill(sudokuFieldsGlobal, currentRow, currentCol, num))
        {
            sudokuFieldsGlobal[currentRow, currentCol]->SetValue(num, sudokuFieldsGlobal, currentRow, currentCol);
            return false;
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
            if (sudokuFieldsGlobal[row, col]->GetValue() == 0 || sudokuFieldsGlobal[row, col]->Text == "")
                return true;
        }
    }
    return false;
}

bool ButtonFillSudoku::IsValidFill(array<SudokuField^, 2>^ fieldsSudoku, int% row, int% col, int value)
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

ButtonFillSudoku::ButtonFillSudoku(Panel^ panel, array<SudokuField^, 2>^ fieldsSudoku)
{
    mainPanel = panel;
    sudokuFieldsGlobal = fieldsSudoku;
}

void ButtonFillSudoku::UpdateUI(array<SudokuField^, 2>^ fieldsSudoku)
{
    if (mainPanel->InvokeRequired)
    {
        mainPanel->Invoke(gcnew Action<array<SudokuField^, 2>^>(this, &ButtonFillSudoku::UpdateUI), fieldsSudoku);
    }
    else
    {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++)
            {
                fieldsSudoku[i, j]->SetValue(sudokuFieldsGlobal[i, j]->GetValue(), sudokuFieldsGlobal, i, j);
                fieldsSudoku[i, j]->Refresh();
            }
        }
        mainPanel->Refresh();
    }
}