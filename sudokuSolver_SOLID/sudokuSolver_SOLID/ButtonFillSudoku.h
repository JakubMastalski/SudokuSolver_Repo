#pragma once
#include "iPanelButtons.h"
#include  "ButtonStart.h"


ref class ButtonFillSudoku : public IPanelButtons
{
private:
    System::Windows::Forms::Timer^ globalFillTimer; 
    int currentRow = -1;  
    int currentCol = -1; 
    array<SudokuField^, 2>^ sudokuFieldsGlobal;
    Panel^ mainPanel;
public:
    ButtonFillSudoku(Panel^ panel, array<SudokuField^, 2>^ fieldsSudoku);
    void FillSudokuButton_Click(array<SudokuField^, 2>^ fieldsSudoku, Panel^ MainPanel, Timer^ fillTimer);
    bool FillSudokuStep(array<SudokuField^, 2>^ fieldsSudoku);
    bool FindEmptyLocation(array<SudokuField^, 2>^ fieldsSudoku, int% row, int% col);
    bool IsValidFill(array<SudokuField^, 2>^ fieldsSudoku, int% row, int% col, int value);
};

