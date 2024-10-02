#include "pch.h"
#include "SudokuFieldLogic.h"
#include "C:\Users\USER\Desktop\sudokuSolver_Repo\sudokuSolver_SOLID\sudokuSolver_SOLID/SudokuField.cpp"



TEST(SudokuFieldLogicTest, SetAndGetValue) {
    SudokuFieldLogic logic;
    EXPECT_EQ(logic.GetValue(3,2),0);
    logic.SetValue(7, 5, 5);
    EXPECT_EQ(logic.GetValue(5, 5), 7);
}

TEST(SudokuFieldLogicTest, SetAndGetValue2) {
    SudokuFieldLogic logic;
    EXPECT_EQ(logic.GetValue(3, 2), 0);
    logic.SetValue(7, 5, 5);
    EXPECT_EQ(logic.GetValue(5, 5), 7);
    logic.ClearValue();
    EXPECT_EQ(logic.GetValue(3, 2), 0);
}

TEST(SudokuFieldLogicTest, ClearValue) {
    SudokuFieldLogic logic;
    logic.SetValue(5, 0, 0); 
    logic.ClearValue();  
    EXPECT_EQ(logic.GetValue(0, 0), 0);
}

TEST(SudokuFieldLogicTest, ClearValue2) {
    SudokuFieldLogic logic;

    logic.SetValue(4, 1, 1);
    logic.SetValue(8, 7, 7);

    EXPECT_EQ(logic.GetValue(1, 1), 4);
    EXPECT_EQ(logic.GetValue(7, 7), 8);

    logic.ClearValue();

    EXPECT_EQ(logic.GetValue(1, 1), 0);
    EXPECT_EQ(logic.GetValue(7, 7), 0);
}
