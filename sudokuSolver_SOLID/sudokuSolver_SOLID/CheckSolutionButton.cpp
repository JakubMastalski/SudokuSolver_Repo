#include "CheckSolutionButton.h"

void CheckSolutionButton::CheckSolution(array<SudokuField^, 2>^ fieldsSudoku)
{
    if (!AreAllFieldsFilled(fieldsSudoku))
    {
        MessageBox::Show("All fields must be filled!", "Error");
        return;
    }

    if (HasErrors(fieldsSudoku))
    {
        MessageBox::Show("Mistake in solution!", "Mistake");
    }
    else
    {
        MessageBox::Show("Congratulations! The solution is correct!", "Success");
    }
}

bool CheckSolutionButton::AreAllFieldsFilled(array<SudokuField^, 2>^ fieldsSudoku)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (fieldsSudoku[i, j]->GetValue() == 0)
            {
                return false;
            }
        }
    }
    return true;
}

bool CheckSolutionButton::HasErrors(array<SudokuField^, 2>^ fieldsSudoku)
{
    for (int i = 0; i < 9; i++)
    {
        array<bool>^ seenRow = gcnew array<bool>(9);
        for (int j = 0; j < 9; j++)
        {
            int value = fieldsSudoku[i, j]->GetValue();
            if (seenRow[value - 1])
            {
                return true;
            }
            seenRow[value - 1] = true;
        }

        array<bool>^ seenCol = gcnew array<bool>(9);
        for (int j = 0; j < 9; j++)
        {
            int value = fieldsSudoku[j, i]->GetValue();
            if (seenCol[value - 1])
            {
                return true;
            }
            seenCol[value - 1] = true;
        }

        int startRow = (i / 3) * 3;
        int startCol = (i % 3) * 3;
        array<bool>^ seenSquare = gcnew array<bool>(9);

        for (int row = 0; row < 3; row++)
        {
            for (int col = 0; col < 3; col++)
            {
                int value = fieldsSudoku[startRow + row, startCol + col]->GetValue();
                if (seenSquare[value - 1])
                {
                    return true;
                }
                seenSquare[value - 1] = true;
            }
        }
    }
    return false;
}