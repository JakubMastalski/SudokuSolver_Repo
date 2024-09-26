#include "MainForm.h"

namespace sudokuSolverSOLID
{


	MainForm::MainForm(void)
	{
		void InitializeComponent(void);
		{
			fieldsSudoku = gcnew array<SudokuField^, 2>(9, 9);

			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->MenuOptionsPanel = (gcnew System::Windows::Forms::Panel());

			this->StartButton = gcnew IPanelButtons();
			this->FillSudokuButton = gcnew IPanelButtons();
			this->RestartButton = gcnew PanelButtonsSecondary();
			this->ExitButton = gcnew PanelButtonsSecondary();
			this->HideButton = gcnew PanelButtonsSecondary();
			this->ShowButton = gcnew PanelButtonsSecondary();
			
			this->MainPanel->SuspendLayout();
			this->MenuOptionsPanel->SuspendLayout();
			this->SuspendLayout();
			
			//MainForm

			this->ClientSize = System::Drawing::Size(968, 474);
			this->Name = L"MainForm";
			this->ResumeLayout(false);

			// 
			// MainPanel
			// 
			this->MainPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MainPanel->Location = System::Drawing::Point(82, 63);
			this->MainPanel->Name = L"panel1";
			this->MainPanel->Size = System::Drawing::Size(440, 438);
			this->MainPanel->TabIndex = 0;

			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					SudokuMajorField^ majorField = gcnew SudokuMajorField(j * 146 + 6, i * 146 + 5);
					this->MainPanel->Controls->Add(majorField);
				}
			}

			// 
	        // MenuOptionsPanel
	        // 
			this->MenuOptionsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->MenuOptionsPanel->Controls->Add(this->HideButton);
			this->MenuOptionsPanel->Controls->Add(this->RestartButton);
			this->MenuOptionsPanel->Controls->Add(this->StartButton);
			this->MenuOptionsPanel->Controls->Add(this->ExitButton);
			this->MenuOptionsPanel->Controls->Add(this->FillSudokuButton);
			this->MenuOptionsPanel->Location = System::Drawing::Point(605, 2);
			this->MenuOptionsPanel->Name = L"MenuOptionsPanel";
			this->MenuOptionsPanel->Size = System::Drawing::Size(250, 588);
			this->MenuOptionsPanel->TabIndex = 5;


			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(12, 27);
			this->TabIndex = 1;
			this->StartButton->Name = L"StartButton";
			this->StartButton->Text = L"Start Game";
			this->StartButton->Click += gcnew System::EventHandler(this, &MainForm::StartButton_Click);
			// 
			//  FillSudokuButton
			// 
			this->FillSudokuButton->Location = System::Drawing::Point(12, 246);
			this->FillSudokuButton->Name = L" FillSudokuButton";
			this->FillSudokuButton->Size = System::Drawing::Size(227, 54);
			this->TabIndex = 2;
			this->FillSudokuButton->Text = L"Fill Sudoku";
			this->FillSudokuButton->Click += gcnew System::EventHandler(this, &MainForm::FillSudokuButton_Click);
			// 
			// CloseButton
			// 
			this->RestartButton->Location = System::Drawing::Point(12, 100);
			this->RestartButton->Name = L"CloseButton";
			this->RestartButton->Size = System::Drawing::Size(227, 54);
			this->RestartButton->TabIndex = 3;
			this->RestartButton->Text = L"Restart";
			this->RestartButton->Click += gcnew System::EventHandler(this, &MainForm::RestartButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(12, 174);
			this->ExitButton->Name = L" ExitButton";
			this->ExitButton->Size = System::Drawing::Size(227, 54);
			this->ExitButton->TabIndex = 4;
			this->ExitButton->Text = L"Close";
			this->ExitButton->Click += gcnew System::EventHandler(this, &MainForm::ExitButton_Click);
			// 
			// HideButton
			// 
			this->HideButton->Location = System::Drawing::Point(12, 321);
			this->HideButton->Name = L"HideButton";
			this->HideButton->Size = System::Drawing::Size(227, 54);
			this->HideButton->TabIndex = 5;
			this->HideButton->Text = L"Hide Menu";
			this->HideButton->Click += gcnew System::EventHandler(this, &MainForm::HideButton_Click);
			// 
			// ShowButton
			// 
			this->ShowButton->Location = System::Drawing::Point(617, 22);
			this->ShowButton->Name = L"ShowButton";
			this->ShowButton->Size = System::Drawing::Size(227, 54);
			this->ShowButton->Text = L"Open Menu";
			this->ShowButton->Visible = false;
			this->ShowButton->Click += gcnew System::EventHandler(this, &MainForm::ShowButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(856, 584);
			this->Controls->Add(this->ShowButton);
			this->Controls->Add(this->MenuOptionsPanel);
			this->Controls->Add(this->MainPanel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(874, 631);
			this->MinimumSize = System::Drawing::Size(874, 631);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseUp);
			this->MainPanel->ResumeLayout(false);
			this->MenuOptionsPanel->ResumeLayout(false);
			this->ResumeLayout(false);
		}
	}

	//Menu Buttons Options

	Void MainForm::StartButton_Click(Object^ sender, EventArgs^ e) {
		StartButton->StartButton_Click(fieldsSudoku, MainPanel);
	}

	Void MainForm::FillSudokuButton_Click(Object^ sender, EventArgs^ e) {
		;
	}

	Void MainForm::RestartButton_Click(Object^ sender, EventArgs^ e) {
		RestartButton->RestartButton_Click();
	}

	Void MainForm::HideButton_Click(Object^ sender, EventArgs^ e) {
		HideButton->HideButton_Click(MenuOptionsPanel, ShowButton);
	}

	Void MainForm::ShowButton_Click(Object^ sender, EventArgs^ e) {
		ShowButton->ShowButton_Click(MenuOptionsPanel, ShowButton);
	}

	Void MainForm::ExitButton_Click(Object^ sender, EventArgs^ e) {
		ExitButton->ExitButton_Click();
	}

	//Dragging Form

	Void MainForm::MainForm_MouseMove(Object^ sender, Windows::Forms::MouseEventArgs^ e) {
		if (dragging) {
			Point current_mouse_pos = PointToScreen(Point(e->X, e->Y));
			Point new_location = Point(current_mouse_pos.X - offset.X, current_mouse_pos.Y - offset.Y);
			this->Location = new_location;
		}
	}

	Void MainForm::MainForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}

	Void MainForm::MainForm_MouseUp(Object^ sender, Windows::Forms::MouseEventArgs^ e) {
		dragging = false;
	}
}