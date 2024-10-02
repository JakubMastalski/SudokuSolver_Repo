#pragma once
#include "iPanelButtons.h"

ref class ButtonFillSudoku :
    public IPanelButtons
{
private:
    array<SudokuField^, 2>^ sudokuFieldsGlobal;  // Globalne pola Sudoku
    System::Windows::Forms::Timer^ globalFillTimer;  // Globalny timer
    int currentRow = -1;  // Aktualny wiersz
    int currentCol = -1;  // Aktualna kolumna

public:
    void FillSudokuButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel, Timer^ fillTimer);
    void ButtonFillSudoku::OnTick(Object^ sender, EventArgs^ e);
    bool ButtonFillSudoku::FillSudokuStep(array<SudokuField^, 2>^ fieldsSudoku, int row, int col);
    bool ButtonFillSudoku::FindEmptyLocation(int& row, int& col);
    bool ButtonFillSudoku::IsValid(int& row, int& col, int& value);
    void ButtonFillSudoku::UpdateUI();
};

