#pragma once
#include "iPanelButtons.h"
#include  "ButtonStart.h"


ref class ButtonFillSudoku : public IPanelButtons
{
private:
    System::Windows::Forms::Timer^ globalFillTimer;  // Globalny timer
    int currentRow = -1;  // Aktualny wiersz
    int currentCol = -1;  // Aktualna kolumna
    array<SudokuField^, 2>^ sudokuFieldsGlobal;
    Panel^ mainPanel;
public:
    ButtonFillSudoku(Panel^ panel);
    // Deklaracje funkcji
    void FillSudokuButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel, Timer^ fillTimer);
    void OnTick(Object^ sender, EventArgs^ e);
    bool FillSudokuStep(array<SudokuField^, 2>^ fieldsSudoku);
    bool FindEmptyLocation(array<SudokuField^, 2>^ fieldsSudoku, int% row, int% col);
    bool IsValidFill(array<SudokuField^, 2>^ fieldsSudoku, int% row, int% col, int value);
    void UpdateUI(array<SudokuField^, 2>^ fieldsSudoku);
};

