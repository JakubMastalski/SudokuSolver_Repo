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
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->RestartButton = (gcnew System::Windows::Forms::Button());
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->HideButton = (gcnew System::Windows::Forms::Button());
			this->ShowButton = (gcnew System::Windows::Forms::Button());

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
			this->MenuOptionsPanel->Controls->Add(this->CloseButton);
			this->MenuOptionsPanel->Controls->Add(this->StartButton);
			this->MenuOptionsPanel->Controls->Add(this->ExitButton);
			this->MenuOptionsPanel->Controls->Add(this->RestartButton);
			this->MenuOptionsPanel->Location = System::Drawing::Point(605, 2);
			this->MenuOptionsPanel->Name = L"MenuOptionsPanel";
			this->MenuOptionsPanel->Size = System::Drawing::Size(250, 588);
			this->MenuOptionsPanel->TabIndex = 5;


			// 
			// StartButton
			// 
			this->StartButton->BackColor = System::Drawing::Color::Black;
			this->StartButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->StartButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->StartButton->FlatAppearance->BorderSize = 2;
			this->StartButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->StartButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->StartButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->StartButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold));
			this->StartButton->Location = System::Drawing::Point(12, 27);
			this->StartButton->Name = L"button1";
			this->StartButton->Size = System::Drawing::Size(227, 54);
			this->StartButton->TabIndex = 1;
			this->StartButton->Text = L"Start Game";
			this->StartButton->UseVisualStyleBackColor = false;
			// 
			//  RestartButton
			// 
			this->RestartButton->BackColor = System::Drawing::Color::Black;
			this->RestartButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RestartButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->RestartButton->FlatAppearance->BorderSize = 2;
			this->RestartButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->RestartButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->RestartButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RestartButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold));
			this->RestartButton->Location = System::Drawing::Point(12, 246);
			this->RestartButton->Name = L"button2";
			this->RestartButton->Size = System::Drawing::Size(227, 54);
			this->RestartButton->TabIndex = 2;
			this->RestartButton->Text = L"Fill Sudoku";
			this->RestartButton->UseVisualStyleBackColor = false;
			// 
			// CloseButton
			// 
			this->CloseButton->BackColor = System::Drawing::Color::Black;
			this->CloseButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CloseButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->CloseButton->FlatAppearance->BorderSize = 2;
			this->CloseButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->CloseButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->CloseButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold));
			this->CloseButton->Location = System::Drawing::Point(12, 100);
			this->CloseButton->Name = L"button3";
			this->CloseButton->Size = System::Drawing::Size(227, 54);
			this->CloseButton->TabIndex = 3;
			this->CloseButton->Text = L"Restart";
			this->CloseButton->UseVisualStyleBackColor = false;
			this->CloseButton->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::Color::Black;
			this->ExitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ExitButton->FlatAppearance->BorderSize = 2;
			this->ExitButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->ExitButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold));
			this->ExitButton->Location = System::Drawing::Point(12, 174);
			this->ExitButton->Name = L"button4";
			this->ExitButton->Size = System::Drawing::Size(227, 54);
			this->ExitButton->TabIndex = 4;
			this->ExitButton->Text = L"Close";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// HideButton
			// 
			this->HideButton->BackColor = System::Drawing::Color::Black;
			this->HideButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HideButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->HideButton->FlatAppearance->BorderSize = 2;
			this->HideButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->HideButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->HideButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->HideButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold));
			this->HideButton->Location = System::Drawing::Point(12, 321);
			this->HideButton->Name = L"button5";
			this->HideButton->Size = System::Drawing::Size(227, 54);
			this->HideButton->TabIndex = 5;
			this->HideButton->Text = L"Hide Menu";
			this->HideButton->UseVisualStyleBackColor = false;
			this->HideButton->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// ShowButton
			// 
			this->ShowButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ShowButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ShowButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ShowButton->FlatAppearance->BorderSize = 2;
			this->ShowButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->ShowButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->ShowButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ShowButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold));
			this->ShowButton->Location = System::Drawing::Point(617, 22);
			this->ShowButton->Name = L"button6";
			this->ShowButton->Size = System::Drawing::Size(227, 54);
			this->ShowButton->TabIndex = 6;
			this->ShowButton->Text = L"Open Menu";
			this->ShowButton->UseVisualStyleBackColor = false;
			this->ShowButton->Visible = false;
			this->ShowButton->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
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

	Void MainForm::StartButton_Click(Object^ sender, EventArgs^ e) {
	}

	Void MainForm::button3_Click(Object^ sender, EventArgs^ e) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				SudokuMajorField^ majorField = dynamic_cast<SudokuMajorField^>(this->MainPanel->Controls[i * 3 + j]);

				for (int minorIndex = 0; minorIndex < majorField->Controls->Count; minorIndex++) {
					SudokuMiniorField^ minorField = dynamic_cast<SudokuMiniorField^>(majorField->Controls[minorIndex]);

					for (int fieldIndex = 0; fieldIndex < minorField->GetFields()->Length; fieldIndex++) {
						SudokuField^ field = minorField->GetField(fieldIndex);

						int globalRow = i * 3 + (minorIndex / 3);
						int globalCol = j * 3 + (minorIndex % 3);

						fieldsSudoku[globalRow, globalCol] = field;

						fieldsSudoku[3, 2]->SetValue(5, fieldsSudoku, 3, 2);
					}
				}
			}
		}
	}

	Void MainForm::button5_Click(Object^ sender, EventArgs^ e) {
		MenuOptionsPanel->Visible = false;
		ShowButton->Visible = true;
	}

	Void MainForm::button6_Click(Object^ sender, EventArgs^ e) {
		MenuOptionsPanel->Visible = true;
		ShowButton->Visible = false;
	}

	Void MainForm::button4_Click(Object^ sender, EventArgs^ e) {
		Application::Exit();
	}

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
