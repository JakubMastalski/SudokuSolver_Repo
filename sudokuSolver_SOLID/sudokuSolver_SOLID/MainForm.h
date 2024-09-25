#pragma once
#include "IBoard.h"
#include "Board.h"
#include "SudokuField.h"
#include "SudokuMajorField.h"
#include "SudokuMiniorFiled.h"
#include "ctime"
#include <random>

namespace sudokuSolverSOLID {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void);
	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::Button^ FillSudokuButton;
	private: System::Windows::Forms::Button^ RestartButton;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Button^ HideButton;
	private: System::Windows::Forms::Button^ ShowButton;

	private: System::Windows::Forms::Panel^ MainPanel;
	private: System::Windows::Forms::Panel^ MenuOptionsPanel;

	protected:

	private:
		bool dragging;
		Point offset;
		System::ComponentModel::Container ^components;
		Board^ board;
		array<SudokuField^, 2>^ fieldsSudoku;

#pragma region Windows Form Designer generated code

#pragma endregion
private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void RestartButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void HideButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ShowButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MainForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void MainForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void MainForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
//private: bool MainForm::CanPlaceNumber(int row, int col, int value);
private: System::Void InitializeComponent() {
	this->SuspendLayout();
	this->ClientSize = System::Drawing::Size(632, 411);
	this->Name = L"MainForm";
	this->ResumeLayout(false);
}
};
}
