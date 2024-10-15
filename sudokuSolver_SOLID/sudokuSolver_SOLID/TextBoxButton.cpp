#include "TextBoxButton.h"

void TextBoxButton::TextBoxButton_Click(array<SudokuField^, 2>^ fieldsSudoku, array<user_textBox^, 2>^ textBoxesSudoku, Panel^ TextBoxPanel)
{
	TextBoxPanel->Controls->Clear();

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			user_textBox^ textBox = gcnew user_textBox(i, j);

			if (fieldsSudoku[i, j]->GetValue() != 0)
				textBox->Text = fieldsSudoku[i, j]->GetValue().ToString();

			textBox->BoxColor(i, j);
			TextBoxPanel->Controls->Add(textBox);
			textBoxesSudoku[i, j] = textBox;
			fieldsSudoku[i, j]->Visible = false;
		}
	}
}