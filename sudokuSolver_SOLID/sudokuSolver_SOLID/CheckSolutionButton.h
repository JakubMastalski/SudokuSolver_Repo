#pragma once
#include "iPanelButtons.h"
#include "SudokuField.h"

ref class CheckSolutionButton : public IPanelButtons
{
public:
    void CheckSolution(array<SudokuField^, 2>^ fieldsSudoku);

private:
    bool AreAllFieldsFilled(array<SudokuField^, 2>^ fieldsSudoku);
    bool HasErrors(array<SudokuField^, 2>^ fieldsSudoku);
};
