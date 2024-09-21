#include "MainForm.h"

namespace sudokuSolverSOLID
{


	MainForm::MainForm(void)
	{
		void InitializeComponent(void);
		{
			board = gcnew Board();
			fields = board->getFields();

			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					int index = i * 9 + j; 
					SudokuField^ field = fields[index];
				}
			}

			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->panel82 = (gcnew System::Windows::Forms::Panel());
			this->panel83 = (gcnew System::Windows::Forms::Panel());
			this->panel84 = (gcnew System::Windows::Forms::Panel());
			this->panel85 = (gcnew System::Windows::Forms::Panel());
			this->panel86 = (gcnew System::Windows::Forms::Panel());
			this->panel87 = (gcnew System::Windows::Forms::Panel());
			this->panel88 = (gcnew System::Windows::Forms::Panel());
			this->panel89 = (gcnew System::Windows::Forms::Panel());
			this->panel90 = (gcnew System::Windows::Forms::Panel());
			this->panel91 = (gcnew System::Windows::Forms::Panel());
			this->panel72 = (gcnew System::Windows::Forms::Panel());
			this->panel73 = (gcnew System::Windows::Forms::Panel());
			this->panel74 = (gcnew System::Windows::Forms::Panel());
			this->panel75 = (gcnew System::Windows::Forms::Panel());
			this->panel76 = (gcnew System::Windows::Forms::Panel());
			this->panel77 = (gcnew System::Windows::Forms::Panel());
			this->panel78 = (gcnew System::Windows::Forms::Panel());
			this->panel79 = (gcnew System::Windows::Forms::Panel());
			this->panel80 = (gcnew System::Windows::Forms::Panel());
			this->panel81 = (gcnew System::Windows::Forms::Panel());
			this->panel52 = (gcnew System::Windows::Forms::Panel());
			this->panel53 = (gcnew System::Windows::Forms::Panel());
			this->panel54 = (gcnew System::Windows::Forms::Panel());
			this->panel55 = (gcnew System::Windows::Forms::Panel());
			this->panel56 = (gcnew System::Windows::Forms::Panel());
			this->panel57 = (gcnew System::Windows::Forms::Panel());
			this->panel58 = (gcnew System::Windows::Forms::Panel());
			this->panel59 = (gcnew System::Windows::Forms::Panel());
			this->panel60 = (gcnew System::Windows::Forms::Panel());
			this->panel61 = (gcnew System::Windows::Forms::Panel());
			this->panel62 = (gcnew System::Windows::Forms::Panel());
			this->panel63 = (gcnew System::Windows::Forms::Panel());
			this->panel64 = (gcnew System::Windows::Forms::Panel());
			this->panel65 = (gcnew System::Windows::Forms::Panel());
			this->panel66 = (gcnew System::Windows::Forms::Panel());
			this->panel67 = (gcnew System::Windows::Forms::Panel());
			this->panel68 = (gcnew System::Windows::Forms::Panel());
			this->panel69 = (gcnew System::Windows::Forms::Panel());
			this->panel70 = (gcnew System::Windows::Forms::Panel());
			this->panel71 = (gcnew System::Windows::Forms::Panel());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->panel43 = (gcnew System::Windows::Forms::Panel());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
			this->panel45 = (gcnew System::Windows::Forms::Panel());
			this->panel46 = (gcnew System::Windows::Forms::Panel());
			this->panel47 = (gcnew System::Windows::Forms::Panel());
			this->panel48 = (gcnew System::Windows::Forms::Panel());
			this->panel49 = (gcnew System::Windows::Forms::Panel());
			this->panel50 = (gcnew System::Windows::Forms::Panel());
			this->panel51 = (gcnew System::Windows::Forms::Panel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel92 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->MainPanel->SuspendLayout();
			this->panel82->SuspendLayout();
			this->panel72->SuspendLayout();
			this->panel52->SuspendLayout();
			this->panel62->SuspendLayout();
			this->panel42->SuspendLayout();
			this->panel32->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel92->SuspendLayout();
			this->SuspendLayout();
			
			// 
// MainForm
// 
			this->ClientSize = System::Drawing::Size(968, 474);
			this->Name = L"MainForm";
			this->ResumeLayout(false);

			// 
			// MainPanel
			// 
			this->MainPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MainPanel->Controls->Add(this->panel82);
			this->MainPanel->Controls->Add(this->panel72);
			this->MainPanel->Controls->Add(this->panel52);
			this->MainPanel->Controls->Add(this->panel62);
			this->MainPanel->Controls->Add(this->panel42);
			this->MainPanel->Controls->Add(this->panel32);
			this->MainPanel->Controls->Add(this->panel22);
			this->MainPanel->Controls->Add(this->panel12);
			this->MainPanel->Controls->Add(this->panel2);
			this->MainPanel->Location = System::Drawing::Point(82, 63);
			this->MainPanel->Name = L"panel1";
			this->MainPanel->Size = System::Drawing::Size(440, 438);
			this->MainPanel->TabIndex = 0;
			// 
			// panel82
			// 
			this->panel82->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel82->Controls->Add(this->panel83);
			this->panel82->Controls->Add(this->panel84);
			this->panel82->Controls->Add(this->panel85);
			this->panel82->Controls->Add(this->panel86);
			this->panel82->Controls->Add(this->panel87);
			this->panel82->Controls->Add(this->panel88);
			this->panel82->Controls->Add(this->panel89);
			this->panel82->Controls->Add(this->panel90);
			this->panel82->Controls->Add(this->panel91);
			this->panel82->Location = System::Drawing::Point(295, 290);
			this->panel82->Name = L"panel82";
			this->panel82->Size = System::Drawing::Size(140, 140);
			this->panel82->TabIndex = 9;
			// 
			// panel83
			// 
			this->panel83->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel83->Location = System::Drawing::Point(95, 94);
			this->panel83->Name = L"panel83";
			this->panel83->Size = System::Drawing::Size(40, 40);
			this->panel83->TabIndex = 7;


			// 
			// panel84
			// 
			this->panel84->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel84->Location = System::Drawing::Point(49, 94);
			this->panel84->Name = L"panel84";
			this->panel84->Size = System::Drawing::Size(40, 40);
			this->panel84->TabIndex = 6;
			// 
			// panel85
			// 
			this->panel85->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel85->Location = System::Drawing::Point(3, 94);
			this->panel85->Name = L"panel85";
			this->panel85->Size = System::Drawing::Size(40, 40);
			this->panel85->TabIndex = 5;
			// 
			// panel86
			// 
			this->panel86->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel86->Location = System::Drawing::Point(95, 49);
			this->panel86->Name = L"panel86";
			this->panel86->Size = System::Drawing::Size(40, 40);
			this->panel86->TabIndex = 4;
			// 
			// panel87
			// 
			this->panel87->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel87->Location = System::Drawing::Point(95, 3);
			this->panel87->Name = L"panel87";
			this->panel87->Size = System::Drawing::Size(40, 40);
			this->panel87->TabIndex = 1;
			// 
			// panel88
			// 
			this->panel88->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel88->Location = System::Drawing::Point(49, 49);
			this->panel88->Name = L"panel88";
			this->panel88->Size = System::Drawing::Size(40, 40);
			this->panel88->TabIndex = 3;

			// 
			// panel89
			// 
			this->panel89->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel89->Location = System::Drawing::Point(3, 49);
			this->panel89->Name = L"panel89";
			this->panel89->Size = System::Drawing::Size(40, 40);
			this->panel89->TabIndex = 2;
			// 
			// panel90
			// 
			this->panel90->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel90->Location = System::Drawing::Point(49, 3);
			this->panel90->Name = L"panel90";
			this->panel90->Size = System::Drawing::Size(40, 40);
			this->panel90->TabIndex = 1;
			// 
			// panel91
			// 
			this->panel91->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel91->Location = System::Drawing::Point(3, 3);
			this->panel91->Name = L"panel91";
			this->panel91->Size = System::Drawing::Size(40, 40);
			this->panel91->TabIndex = 0;
			// 
			// panel72
			// 
			this->panel72->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel72->Controls->Add(this->panel73);
			this->panel72->Controls->Add(this->panel74);
			this->panel72->Controls->Add(this->panel75);
			this->panel72->Controls->Add(this->panel76);
			this->panel72->Controls->Add(this->panel77);
			this->panel72->Controls->Add(this->panel78);
			this->panel72->Controls->Add(this->panel79);
			this->panel72->Controls->Add(this->panel80);
			this->panel72->Controls->Add(this->panel81);
			this->panel72->Location = System::Drawing::Point(149, 290);
			this->panel72->Name = L"panel72";
			this->panel72->Size = System::Drawing::Size(140, 140);
			this->panel72->TabIndex = 11;
			this->panel72->Text = "7";
			// 
			// panel73
			// 
			this->panel73->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel73->Location = System::Drawing::Point(95, 94);
			this->panel73->Name = L"panel73";
			this->panel73->Size = System::Drawing::Size(40, 40);
			this->panel73->TabIndex = 7;
		
			// 
			// panel74
			// 
			this->panel74->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel74->Location = System::Drawing::Point(49, 94);
			this->panel74->Name = L"panel74";
			this->panel74->Size = System::Drawing::Size(40, 40);
			this->panel74->TabIndex = 6;

			// 
			// panel75
			// 
			this->panel75->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel75->Location = System::Drawing::Point(3, 94);
			this->panel75->Name = L"panel75";
			this->panel75->Size = System::Drawing::Size(40, 40);
			this->panel75->TabIndex = 5;

			// 
			// panel76
			// 
			this->panel76->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel76->Location = System::Drawing::Point(95, 49);
			this->panel76->Name = L"panel76";
			this->panel76->Size = System::Drawing::Size(40, 40);
			this->panel76->TabIndex = 4;

			// 
			// panel77
			// 
			this->panel77->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel77->Location = System::Drawing::Point(95, 3);
			this->panel77->Name = L"panel77";
			this->panel77->Size = System::Drawing::Size(40, 40);
			this->panel77->TabIndex = 1;

			// 
			// panel78
			// 
			this->panel78->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel78->Location = System::Drawing::Point(49, 49);
			this->panel78->Name = L"panel78";
			this->panel78->Size = System::Drawing::Size(40, 40);
			this->panel78->TabIndex = 3;


			// 
			// panel79
			// 
			this->panel79->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel79->Location = System::Drawing::Point(3, 49);
			this->panel79->Name = L"panel79";
			this->panel79->Size = System::Drawing::Size(40, 40);
			this->panel79->TabIndex = 2;

			// 
			// panel80
			// 
			this->panel80->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel80->Location = System::Drawing::Point(49, 3);
			this->panel80->Name = L"panel80";
			this->panel80->Size = System::Drawing::Size(40, 40);
			this->panel80->TabIndex = 1;
			// 
			// panel81
			// 
			this->panel81->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel81->Location = System::Drawing::Point(3, 3);
			this->panel81->Name = L"panel81";
			this->panel81->Size = System::Drawing::Size(40, 40);
			this->panel81->TabIndex = 0;

			// 
			// panel52
			// 
			this->panel52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel52->Controls->Add(this->panel53);
			this->panel52->Controls->Add(this->panel54);
			this->panel52->Controls->Add(this->panel55);
			this->panel52->Controls->Add(this->panel56);
			this->panel52->Controls->Add(this->panel57);
			this->panel52->Controls->Add(this->panel58);
			this->panel52->Controls->Add(this->panel59);
			this->panel52->Controls->Add(this->panel60);
			this->panel52->Controls->Add(this->panel61);
			this->panel52->Location = System::Drawing::Point(3, 290);
			this->panel52->Name = L"panel52";
			this->panel52->Size = System::Drawing::Size(140, 140);
			this->panel52->TabIndex = 10;
			// 
			// panel53
			// 
			this->panel53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel53->Location = System::Drawing::Point(95, 94);
			this->panel53->Name = L"panel53";
			this->panel53->Size = System::Drawing::Size(40, 40);
			this->panel53->TabIndex = 7;
			// 
			// panel54
			// 
			this->panel54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel54->Location = System::Drawing::Point(49, 94);
			this->panel54->Name = L"panel54";
			this->panel54->Size = System::Drawing::Size(40, 40);
			this->panel54->TabIndex = 6;
			// 
			// panel55
			// 
			this->panel55->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel55->Location = System::Drawing::Point(3, 94);
			this->panel55->Name = L"panel55";
			this->panel55->Size = System::Drawing::Size(40, 40);
			this->panel55->TabIndex = 5;
			// 
			// panel56
			// 
			this->panel56->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel56->Location = System::Drawing::Point(95, 49);
			this->panel56->Name = L"panel56";
			this->panel56->Size = System::Drawing::Size(40, 40);
			this->panel56->TabIndex = 4;
			// 
			// panel57
			// 
			this->panel57->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel57->Location = System::Drawing::Point(95, 3);
			this->panel57->Name = L"panel57";
			this->panel57->Size = System::Drawing::Size(40, 40);
			this->panel57->TabIndex = 1;
			// 
			// panel58
			// 
			this->panel58->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel58->Location = System::Drawing::Point(49, 49);
			this->panel58->Name = L"panel58";
			this->panel58->Size = System::Drawing::Size(40, 40);
			this->panel58->TabIndex = 3;
			// 
			// panel59
			// 
			this->panel59->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel59->Location = System::Drawing::Point(3, 49);
			this->panel59->Name = L"panel59";
			this->panel59->Size = System::Drawing::Size(40, 40);
			this->panel59->TabIndex = 2;

			// 
			// panel60
			// 
			this->panel60->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel60->Location = System::Drawing::Point(49, 3);
			this->panel60->Name = L"panel60";
			this->panel60->Size = System::Drawing::Size(40, 40);
			this->panel60->TabIndex = 1;

			// 
			// panel61
			// 
			this->panel61->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel61->Location = System::Drawing::Point(3, 3);
			this->panel61->Name = L"panel61";
			this->panel61->Size = System::Drawing::Size(40, 40);
			this->panel61->TabIndex = 0;

			// 
			// panel62
			// 
			this->panel62->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel62->Controls->Add(this->panel63);
			this->panel62->Controls->Add(this->panel64);
			this->panel62->Controls->Add(this->panel65);
			this->panel62->Controls->Add(this->panel66);
			this->panel62->Controls->Add(this->panel67);
			this->panel62->Controls->Add(this->panel68);
			this->panel62->Controls->Add(this->panel69);
			this->panel62->Controls->Add(this->panel70);
			this->panel62->Controls->Add(this->panel71);
			this->panel62->Location = System::Drawing::Point(295, 149);
			this->panel62->Name = L"panel62";
			this->panel62->Size = System::Drawing::Size(140, 140);
			this->panel62->TabIndex = 9;
			// 
			// panel63
			// 
			this->panel63->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel63->Location = System::Drawing::Point(95, 94);
			this->panel63->Name = L"panel63";
			this->panel63->Size = System::Drawing::Size(40, 40);
			this->panel63->TabIndex = 7;
			// 
			// panel64
			// 
			this->panel64->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel64->Location = System::Drawing::Point(49, 94);
			this->panel64->Name = L"panel64";
			this->panel64->Size = System::Drawing::Size(40, 40);
			this->panel64->TabIndex = 6;

			// 
			// panel65
			// 
			this->panel65->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel65->Location = System::Drawing::Point(3, 94);
			this->panel65->Name = L"panel65";
			this->panel65->Size = System::Drawing::Size(40, 40);
			this->panel65->TabIndex = 5;

			// 
			// panel66
			// 
			this->panel66->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel66->Location = System::Drawing::Point(95, 49);
			this->panel66->Name = L"panel66";
			this->panel66->Size = System::Drawing::Size(40, 40);
			this->panel66->TabIndex = 4;
			// 
			// panel67
			// 
			this->panel67->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel67->Location = System::Drawing::Point(95, 3);
			this->panel67->Name = L"panel67";
			this->panel67->Size = System::Drawing::Size(40, 40);
			this->panel67->TabIndex = 1;
			// 
			// panel68
			// 
			this->panel68->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel68->Location = System::Drawing::Point(49, 49);
			this->panel68->Name = L"panel68";
			this->panel68->Size = System::Drawing::Size(40, 40);
			this->panel68->TabIndex = 3;
			// 
			// panel69
			// 
			this->panel69->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel69->Location = System::Drawing::Point(3, 49);
			this->panel69->Name = L"panel69";
			this->panel69->Size = System::Drawing::Size(40, 40);
			this->panel69->TabIndex = 2;
			// 
			// panel70
			// 
			this->panel70->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel70->Location = System::Drawing::Point(49, 3);
			this->panel70->Name = L"panel70";
			this->panel70->Size = System::Drawing::Size(40, 40);
			this->panel70->TabIndex = 1;
			// 
			// panel71
			// 
			this->panel71->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel71->Location = System::Drawing::Point(3, 3);
			this->panel71->Name = L"panel71";
			this->panel71->Size = System::Drawing::Size(40, 40);
			this->panel71->TabIndex = 0;
			// 
			// panel42
			// 
			this->panel42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel42->Controls->Add(this->panel43);
			this->panel42->Controls->Add(this->panel44);
			this->panel42->Controls->Add(this->panel45);
			this->panel42->Controls->Add(this->panel46);
			this->panel42->Controls->Add(this->panel47);
			this->panel42->Controls->Add(this->panel48);
			this->panel42->Controls->Add(this->panel49);
			this->panel42->Controls->Add(this->panel50);
			this->panel42->Controls->Add(this->panel51);
			this->panel42->Location = System::Drawing::Point(149, 149);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(140, 140);
			this->panel42->TabIndex = 9;
			// 
			// panel43
			// 
			this->panel43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel43->Location = System::Drawing::Point(95, 94);
			this->panel43->Name = L"panel43";
			this->panel43->Size = System::Drawing::Size(40, 40);
			this->panel43->TabIndex = 7;

			// 
			// panel44
			// 
			this->panel44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel44->Location = System::Drawing::Point(49, 94);
			this->panel44->Name = L"panel44";
			this->panel44->Size = System::Drawing::Size(40, 40);
			this->panel44->TabIndex = 6;

			// 
			// panel45
			// 
			this->panel45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel45->Location = System::Drawing::Point(3, 94);
			this->panel45->Name = L"panel45";
			this->panel45->Size = System::Drawing::Size(40, 40);
			this->panel45->TabIndex = 5;

			// 
			// panel46
			// 
			this->panel46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel46->Location = System::Drawing::Point(95, 49);
			this->panel46->Name = L"panel46";
			this->panel46->Size = System::Drawing::Size(40, 40);
			this->panel46->TabIndex = 4;


			// 
			// panel47
			// 
			this->panel47->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel47->Location = System::Drawing::Point(95, 3);
			this->panel47->Name = L"panel47";
			this->panel47->Size = System::Drawing::Size(40, 40);
			this->panel47->TabIndex = 1;
			// 
			// panel48
			// 
			this->panel48->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel48->Location = System::Drawing::Point(49, 49);
			this->panel48->Name = L"panel48";
			this->panel48->Size = System::Drawing::Size(40, 40);
			this->panel48->TabIndex = 3;
			// 
			// panel49
			// 
			this->panel49->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel49->Location = System::Drawing::Point(3, 49);
			this->panel49->Name = L"panel49";
			this->panel49->Size = System::Drawing::Size(40, 40);
			this->panel49->TabIndex = 2;

			// 
			// panel50
			// 
			this->panel50->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel50->Location = System::Drawing::Point(49, 3);
			this->panel50->Name = L"panel50";
			this->panel50->Size = System::Drawing::Size(40, 40);
			this->panel50->TabIndex = 1;

			// 
			// panel51
			// 
			this->panel51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel51->Location = System::Drawing::Point(3, 3);
			this->panel51->Name = L"panel51";
			this->panel51->Size = System::Drawing::Size(40, 40);
			this->panel51->TabIndex = 0;
			// 
			// panel32
			// 
			this->panel32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel32->Controls->Add(this->panel33);
			this->panel32->Controls->Add(this->panel34);
			this->panel32->Controls->Add(this->panel35);
			this->panel32->Controls->Add(this->panel36);
			this->panel32->Controls->Add(this->panel37);
			this->panel32->Controls->Add(this->panel38);
			this->panel32->Controls->Add(this->panel39);
			this->panel32->Controls->Add(this->panel40);
			this->panel32->Controls->Add(this->panel41);
			this->panel32->Location = System::Drawing::Point(3, 149);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(140, 140);
			this->panel32->TabIndex = 9;
			// 
			// panel33
			// 
			this->panel33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel33->Location = System::Drawing::Point(95, 94);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(40, 40);
			this->panel33->TabIndex = 7;

			// 
			// panel34
			// 
			this->panel34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel34->Location = System::Drawing::Point(49, 94);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(40, 40);
			this->panel34->TabIndex = 6;

			// 
			// panel35
			// 
			this->panel35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel35->Location = System::Drawing::Point(3, 94);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(40, 40);
			this->panel35->TabIndex = 5;

			// 
			// panel36
			// 
			this->panel36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel36->Location = System::Drawing::Point(95, 49);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(40, 40);
			this->panel36->TabIndex = 4;

			// 
			// panel37
			// 
			this->panel37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel37->Location = System::Drawing::Point(95, 3);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(40, 40);
			this->panel37->TabIndex = 1;

			// 
			// panel38
			// 
			this->panel38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel38->Location = System::Drawing::Point(49, 49);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(40, 40);
			this->panel38->TabIndex = 3;

		
			// panel39
			// 
			this->panel39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel39->Location = System::Drawing::Point(3, 49);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(40, 40);
			this->panel39->TabIndex = 2;

	;
			// 
			// panel40
			// 
			this->panel40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel40->Location = System::Drawing::Point(49, 3);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(40, 40);
			this->panel40->TabIndex = 1;

			// 
			// panel41
			// 
			this->panel41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel41->Location = System::Drawing::Point(3, 3);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(40, 40);
			this->panel41->TabIndex = 0;

			
			// 
			// panel22
			// 
			this->panel22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel22->Controls->Add(this->panel23);
			this->panel22->Controls->Add(this->panel24);
			this->panel22->Controls->Add(this->panel25);
			this->panel22->Controls->Add(this->panel26);
			this->panel22->Controls->Add(this->panel27);
			this->panel22->Controls->Add(this->panel28);
			this->panel22->Controls->Add(this->panel29);
			this->panel22->Controls->Add(this->panel30);
			this->panel22->Controls->Add(this->panel31);
			this->panel22->Location = System::Drawing::Point(295, 3);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(140, 140);
			this->panel22->TabIndex = 9;
			// 
			// panel23
			// 
			this->panel23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel23->Location = System::Drawing::Point(95, 94);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(40, 40);
			this->panel23->TabIndex = 7;


			// 
			// panel24
			// 
			this->panel24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel24->Location = System::Drawing::Point(49, 94);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(40, 40);
			this->panel24->TabIndex = 6;


			// 
			// panel25
			// 
			this->panel25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel25->Location = System::Drawing::Point(3, 94);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(40, 40);
			this->panel25->TabIndex = 5;

	
			// 
			// panel26
			// 
			this->panel26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel26->Location = System::Drawing::Point(95, 49);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(40, 40);
			this->panel26->TabIndex = 4;

			// 
			// panel27
			// 
			this->panel27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel27->Location = System::Drawing::Point(95, 3);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(40, 40);
			this->panel27->TabIndex = 1;

			// 
			// panel28
			// 
			this->panel28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel28->Location = System::Drawing::Point(49, 49);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(40, 40);
			this->panel28->TabIndex = 3;

			// 
			// panel29
			// 
			this->panel29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel29->Location = System::Drawing::Point(3, 49);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(40, 40);
			this->panel29->TabIndex = 2;

			// 
			// panel30
			// 
			this->panel30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel30->Location = System::Drawing::Point(49, 3);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(40, 40);
			this->panel30->TabIndex = 1;

			// 
			// panel31
			// 
			this->panel31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel31->Location = System::Drawing::Point(3, 3);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(40, 40);
			this->panel31->TabIndex = 0;
			// 
			// panel12
			// 
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel12->Controls->Add(this->panel13);
			this->panel12->Controls->Add(this->panel14);
			this->panel12->Controls->Add(this->panel15);
			this->panel12->Controls->Add(this->panel16);
			this->panel12->Controls->Add(this->panel17);
			this->panel12->Controls->Add(this->panel18);
			this->panel12->Controls->Add(this->panel19);
			this->panel12->Controls->Add(this->panel20);
			this->panel12->Controls->Add(this->panel21);
			this->panel12->Location = System::Drawing::Point(149, 3);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(140, 140);
			this->panel12->TabIndex = 8;
			// Panel 13
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Location = System::Drawing::Point(95, 94);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(40, 40);
			this->panel13->TabIndex = 7;


			// Panel 14
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Location = System::Drawing::Point(49, 94);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(40, 40);
			this->panel14->TabIndex = 6;

			// Panel 15
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Location = System::Drawing::Point(3, 94);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(40, 40);
			this->panel15->TabIndex = 5;

			// Panel 16
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel16->Location = System::Drawing::Point(95, 49);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(40, 40);
			this->panel16->TabIndex = 4;

			/*
			auto label16 = gcnew System::Windows::Forms::Label();
			label16->Location = System::Drawing::Point(5, 5);
			label16->Size = System::Drawing::Size(30, 30);
			label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.2F, System::Drawing::FontStyle::Bold));
			this->panel16->Controls->Add(label16);
			*/

			// Panel 17
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel17->Location = System::Drawing::Point(95, 3);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(40, 40);
			this->panel17->TabIndex = 1;

			// Panel 18
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel18->Location = System::Drawing::Point(49, 49);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(40, 40);
			this->panel18->TabIndex = 3;

			// Panel 19
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Location = System::Drawing::Point(3, 49);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(40, 40);
			this->panel19->TabIndex = 2;

			// Panel 20
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel20->Location = System::Drawing::Point(49, 3);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(40, 40);
			this->panel20->TabIndex = 1;

			// Panel 21
			this->panel21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel21->Location = System::Drawing::Point(3, 3);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(40, 40);
			this->panel21->TabIndex = 0;

			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->panel10);
			this->panel2->Controls->Add(this->panel11);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(140, 140);
			this->panel2->TabIndex = 0;
			// Panel 9
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Location = System::Drawing::Point(95, 94);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(40, 40);
			this->panel9->TabIndex = 7;

			// Panel 10
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Location = System::Drawing::Point(49, 94);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(40, 40);
			this->panel10->TabIndex = 6;

			// Panel 11
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Location = System::Drawing::Point(3, 94);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(40, 40);
			this->panel11->TabIndex = 5;

			// Panel 6
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Location = System::Drawing::Point(95, 49);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(40, 40);
			this->panel6->TabIndex = 4;


			// Panel 5
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Location = System::Drawing::Point(95, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(40, 40);
			this->panel5->TabIndex = 1;

			// Panel 7
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Location = System::Drawing::Point(49, 49);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(40, 40);
			this->panel7->TabIndex = 3;

			// Panel 8
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Location = System::Drawing::Point(3, 49);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(40, 40);
			this->panel8->TabIndex = 2;

			// Panel 4
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Location = System::Drawing::Point(49, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(40, 40);
			this->panel4->TabIndex = 1;

			// Panel 3
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Location = System::Drawing::Point(3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(40, 40);
			this->panel3->TabIndex = 0;

			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(12, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 54);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start Game";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(12, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(227, 54);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Fill Sudoku";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(12, 100);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(227, 54);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Restart";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(12, 174);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(227, 54);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Close";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// panel92
			// 
			this->panel92->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->panel92->Controls->Add(this->button5);
			this->panel92->Controls->Add(this->button3);
			this->panel92->Controls->Add(this->button1);
			this->panel92->Controls->Add(this->button4);
			this->panel92->Controls->Add(this->button2);
			this->panel92->Location = System::Drawing::Point(605, 2);
			this->panel92->Name = L"panel92";
			this->panel92->Size = System::Drawing::Size(250, 588);
			this->panel92->TabIndex = 5;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(12, 321);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(227, 54);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Hide Menu";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.2F, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(617, 22);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(227, 54);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Open Menu";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(856, 584);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->panel92);
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
			this->panel82->ResumeLayout(false);
			this->panel72->ResumeLayout(false);
			this->panel52->ResumeLayout(false);
			this->panel62->ResumeLayout(false);
			this->panel42->ResumeLayout(false);
			this->panel32->ResumeLayout(false);
			this->panel22->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel92->ResumeLayout(false);
			this->ResumeLayout(false);
		}
	}
	Void MainForm::button3_Click(Object^ sender, EventArgs^ e) {
		Application::Restart();
	}

	Void MainForm::button5_Click(Object^ sender, EventArgs^ e) {
		panel92->Visible = false;
		button6->Visible = true;
	}

	Void MainForm::button6_Click(Object^ sender, EventArgs^ e) {
		panel92->Visible = true;
		button6->Visible = false;
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
