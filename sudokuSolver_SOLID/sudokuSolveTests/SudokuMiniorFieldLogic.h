#pragma once
#include "SudokuFieldLogic.h"
#include "array"


// Klasa zarz¹dzaj¹ca logik¹ mini-gry Sudoku
public ref class SudokuMiniorFieldLogic
{
private:
    array<SudokuFieldLogic^>^ fields;  // Tablica pól SudokuFieldLogic

public:
    SudokuMiniorFieldLogic();  // Konstruktor
    array<SudokuFieldLogic^>^ GetFields();  // Zwraca tablicê pól logicznych
    SudokuFieldLogic^ GetField(int index);  // Zwraca pojedyncze pole logiczne
};

