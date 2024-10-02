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
    void FillSudokuButton_Click();
};

