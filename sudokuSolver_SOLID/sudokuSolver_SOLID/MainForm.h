#pragma once

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel62;
	private: System::Windows::Forms::Panel^ panel63;
	private: System::Windows::Forms::Panel^ panel64;
	private: System::Windows::Forms::Panel^ panel65;
	private: System::Windows::Forms::Panel^ panel66;
	private: System::Windows::Forms::Panel^ panel67;
	private: System::Windows::Forms::Panel^ panel68;
	private: System::Windows::Forms::Panel^ panel69;
	private: System::Windows::Forms::Panel^ panel70;
	private: System::Windows::Forms::Panel^ panel71;
	private: System::Windows::Forms::Panel^ panel42;
	private: System::Windows::Forms::Panel^ panel43;
	private: System::Windows::Forms::Panel^ panel44;
	private: System::Windows::Forms::Panel^ panel45;
	private: System::Windows::Forms::Panel^ panel46;
	private: System::Windows::Forms::Panel^ panel47;
	private: System::Windows::Forms::Panel^ panel48;
	private: System::Windows::Forms::Panel^ panel49;
	private: System::Windows::Forms::Panel^ panel50;
	private: System::Windows::Forms::Panel^ panel51;
	private: System::Windows::Forms::Panel^ panel32;
	private: System::Windows::Forms::Panel^ panel33;
	private: System::Windows::Forms::Panel^ panel34;
	private: System::Windows::Forms::Panel^ panel35;
	private: System::Windows::Forms::Panel^ panel36;
	private: System::Windows::Forms::Panel^ panel37;
	private: System::Windows::Forms::Panel^ panel38;
	private: System::Windows::Forms::Panel^ panel39;
	private: System::Windows::Forms::Panel^ panel40;
	private: System::Windows::Forms::Panel^ panel41;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::Panel^ panel30;
	private: System::Windows::Forms::Panel^ panel31;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Panel^ panel82;
	private: System::Windows::Forms::Panel^ panel83;
	private: System::Windows::Forms::Panel^ panel84;
	private: System::Windows::Forms::Panel^ panel85;
	private: System::Windows::Forms::Panel^ panel86;
	private: System::Windows::Forms::Panel^ panel87;
	private: System::Windows::Forms::Panel^ panel88;
	private: System::Windows::Forms::Panel^ panel89;
	private: System::Windows::Forms::Panel^ panel90;
	private: System::Windows::Forms::Panel^ panel91;
	private: System::Windows::Forms::Panel^ panel72;
	private: System::Windows::Forms::Panel^ panel73;
	private: System::Windows::Forms::Panel^ panel74;
	private: System::Windows::Forms::Panel^ panel75;
	private: System::Windows::Forms::Panel^ panel76;
	private: System::Windows::Forms::Panel^ panel77;
	private: System::Windows::Forms::Panel^ panel78;
	private: System::Windows::Forms::Panel^ panel79;
	private: System::Windows::Forms::Panel^ panel80;
	private: System::Windows::Forms::Panel^ panel81;
	private: System::Windows::Forms::Panel^ panel52;
	private: System::Windows::Forms::Panel^ panel53;
	private: System::Windows::Forms::Panel^ panel54;
	private: System::Windows::Forms::Panel^ panel55;
	private: System::Windows::Forms::Panel^ panel56;
	private: System::Windows::Forms::Panel^ panel57;
	private: System::Windows::Forms::Panel^ panel58;
	private: System::Windows::Forms::Panel^ panel59;
	private: System::Windows::Forms::Panel^ panel60;
	private: System::Windows::Forms::Panel^ panel61;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Panel^ panel92;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;

	protected:

	private:
		bool dragging;
		Point offset;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

#pragma endregion
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MainForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void MainForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void MainForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
};
}
