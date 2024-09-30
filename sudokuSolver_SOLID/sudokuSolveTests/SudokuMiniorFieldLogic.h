#pragma once
#include "SudokuFieldLogic.h"
#include "array"


// Klasa zarz�dzaj�ca logik� mini-gry Sudoku
public ref class SudokuMiniorFieldLogic
{
private:
    array<SudokuFieldLogic^>^ fields;  // Tablica p�l SudokuFieldLogic

public:
    SudokuMiniorFieldLogic();  // Konstruktor
    array<SudokuFieldLogic^>^ GetFields();  // Zwraca tablic� p�l logicznych
    SudokuFieldLogic^ GetField(int index);  // Zwraca pojedyncze pole logiczne
};

