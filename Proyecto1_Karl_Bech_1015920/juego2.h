#include"Lista.h"

#pragma once

namespace Proyecto1KarlBech1015920 {
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de juego2
	/// </summary>
	public ref class juego2 : public System::Windows::Forms::Form
	{
	public:
		Lista* miListT1;
		Lista* miListT2;
		Lista* miListT3;
		Lista* miListT4;
		Lista* miListT5;
		Lista* miListT6;
		Lista* miListT7;
		Lista* miListT8;


		Lista* lc1;
		Lista* lc2;
		Lista* lc3;
		Lista* lc4;
		Lista* lc5;
		Lista* lc6;
		Lista* lc7;
		Lista* lc8;

		Lista* todoslosdatos;

		

		static int tamañopilas;
		static int p1;
		static bool mpila;
		static int choosemode;
		static int difp;
		static int movimientos;
		static int difmoves;
		bool win = false;

		String^ step = "";
		String^ step2 = "";

	private: System::Windows::Forms::DataGridView^ gameboard_dgv;
	public:










	private: System::Windows::Forms::ComboBox^ destino_cb;

	private: System::Windows::Forms::ComboBox^ origen_cb;


	private: System::Windows::Forms::ComboBox^ modo_cb;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ modo_btn;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ origen_btn;
	private: System::Windows::Forms::Button^ destino_btn;
	private: System::Windows::Forms::Button^ victoria_btn;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ moves_lbl;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ permove_lbl;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;

	private: System::Windows::Forms::Button^ ordenarnueva_btn;
	private: System::Windows::Forms::DataGridView^ dataGridView2;









	public:
		static array<String^>^ datos;
		juego2(void)
		{
			InitializeComponent();
			miListT1 = new Lista();
			miListT1->z = 0;
			miListT1->start = nullptr;
			miListT1->end = nullptr;


			miListT2 = new Lista();
			miListT2->z = 0;
			miListT2->start = nullptr;
			miListT2->end = nullptr;

			miListT3 = new Lista();
			miListT3->z = 0;
			miListT3->start = nullptr;
			miListT3->end = nullptr;

			miListT4 = new Lista();
			miListT4->z = 0;
			miListT4->start = nullptr;
			miListT4->end = nullptr;

			miListT5 = new Lista();
			miListT5->z = 0;
			miListT5->start = nullptr;
			miListT5->end = nullptr;


			miListT6 = new Lista();
			miListT6->z = 0;
			miListT6->start = nullptr;
			miListT6->end = nullptr;

			miListT7 = new Lista();
			miListT7->z = 0;
			miListT7->start = nullptr;
			miListT7->end = nullptr;

			miListT8 = new Lista();
			miListT8->z = 0;
			miListT8->start = nullptr;
			miListT8->end = nullptr;

			lc1 = new Lista();
			lc1->z = 0;
			lc1->start = nullptr;
			lc1->end = nullptr;
			lc2 = new Lista();
			lc2->z = 0;
			lc2->start = nullptr;
			lc2->end = nullptr;
			lc3 = new Lista();
			lc3->z = 0;
			lc3->start = nullptr;
			lc3->end = nullptr;
			lc4 = new Lista();
			lc4->z = 0;
			lc4->start = nullptr;
			lc4->end = nullptr;
			lc5 = new Lista();
			lc5->z = 0;
			lc5->start = nullptr;
			lc5->end = nullptr;
			lc6 = new Lista();
			lc6->z = 0;
			lc6->start = nullptr;
			lc6->end = nullptr;
			lc7 = new Lista();
			lc7->z = 0;
			lc7->start = nullptr;
			lc7->end = nullptr;
			lc8 = new Lista();
			lc8->z = 0;
			lc8->start = nullptr;
			lc8->end = nullptr;
			todoslosdatos = new Lista();
			todoslosdatos->z = 0;
			todoslosdatos->start = nullptr;
			todoslosdatos->end = nullptr;

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~juego2()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(juego2::typeid));
			this->gameboard_dgv = (gcnew System::Windows::Forms::DataGridView());
			this->destino_cb = (gcnew System::Windows::Forms::ComboBox());
			this->origen_cb = (gcnew System::Windows::Forms::ComboBox());
			this->modo_cb = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->modo_btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->origen_btn = (gcnew System::Windows::Forms::Button());
			this->destino_btn = (gcnew System::Windows::Forms::Button());
			this->victoria_btn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->moves_lbl = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->permove_lbl = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->ordenarnueva_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gameboard_dgv))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// gameboard_dgv
			// 
			this->gameboard_dgv->AllowUserToAddRows = false;
			this->gameboard_dgv->AllowUserToDeleteRows = false;
			this->gameboard_dgv->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->gameboard_dgv->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->gameboard_dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gameboard_dgv->ColumnHeadersVisible = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->gameboard_dgv->DefaultCellStyle = dataGridViewCellStyle1;
			this->gameboard_dgv->Enabled = false;
			this->gameboard_dgv->Location = System::Drawing::Point(281, 8);
			this->gameboard_dgv->Margin = System::Windows::Forms::Padding(2);
			this->gameboard_dgv->Name = L"gameboard_dgv";
			this->gameboard_dgv->ReadOnly = true;
			this->gameboard_dgv->RowHeadersVisible = false;
			this->gameboard_dgv->RowHeadersWidth = 62;
			this->gameboard_dgv->RowTemplate->Height = 28;
			this->gameboard_dgv->ShowEditingIcon = false;
			this->gameboard_dgv->Size = System::Drawing::Size(439, 394);
			this->gameboard_dgv->TabIndex = 0;
			// 
			// destino_cb
			// 
			this->destino_cb->FormattingEnabled = true;
			this->destino_cb->Location = System::Drawing::Point(178, 312);
			this->destino_cb->Margin = System::Windows::Forms::Padding(2);
			this->destino_cb->Name = L"destino_cb";
			this->destino_cb->Size = System::Drawing::Size(99, 21);
			this->destino_cb->TabIndex = 20;
			this->destino_cb->Visible = false;
			// 
			// origen_cb
			// 
			this->origen_cb->FormattingEnabled = true;
			this->origen_cb->Location = System::Drawing::Point(24, 312);
			this->origen_cb->Margin = System::Windows::Forms::Padding(2);
			this->origen_cb->Name = L"origen_cb";
			this->origen_cb->Size = System::Drawing::Size(99, 21);
			this->origen_cb->TabIndex = 21;
			this->origen_cb->Visible = false;
			// 
			// modo_cb
			// 
			this->modo_cb->FormattingEnabled = true;
			this->modo_cb->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Pila", L"Cola" });
			this->modo_cb->Location = System::Drawing::Point(87, 225);
			this->modo_cb->Margin = System::Windows::Forms::Padding(2);
			this->modo_cb->Name = L"modo_cb";
			this->modo_cb->Size = System::Drawing::Size(99, 21);
			this->modo_cb->TabIndex = 22;
			this->modo_cb->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Location = System::Drawing::Point(21, 228);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Modo:";
			this->label1->Visible = false;
			// 
			// modo_btn
			// 
			this->modo_btn->Location = System::Drawing::Point(87, 251);
			this->modo_btn->Name = L"modo_btn";
			this->modo_btn->Size = System::Drawing::Size(99, 23);
			this->modo_btn->TabIndex = 24;
			this->modo_btn->Text = L"Cambiar modo";
			this->modo_btn->UseVisualStyleBackColor = true;
			this->modo_btn->Visible = false;
			this->modo_btn->Click += gcnew System::EventHandler(this, &juego2::modo_btn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(24, 294);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Lugar de origen:";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Location = System::Drawing::Point(178, 293);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Lugar de destino:";
			this->label3->Visible = false;
			// 
			// origen_btn
			// 
			this->origen_btn->Location = System::Drawing::Point(24, 339);
			this->origen_btn->Name = L"origen_btn";
			this->origen_btn->Size = System::Drawing::Size(99, 41);
			this->origen_btn->TabIndex = 27;
			this->origen_btn->Text = L"Guardar lugar de origen";
			this->origen_btn->UseVisualStyleBackColor = true;
			this->origen_btn->Visible = false;
			this->origen_btn->Click += gcnew System::EventHandler(this, &juego2::origen_btn_Click);
			// 
			// destino_btn
			// 
			this->destino_btn->Location = System::Drawing::Point(178, 338);
			this->destino_btn->Name = L"destino_btn";
			this->destino_btn->Size = System::Drawing::Size(98, 42);
			this->destino_btn->TabIndex = 28;
			this->destino_btn->Text = L"Enviar pieza al destino";
			this->destino_btn->UseVisualStyleBackColor = true;
			this->destino_btn->Visible = false;
			this->destino_btn->Click += gcnew System::EventHandler(this, &juego2::destino_btn_Click);
			// 
			// victoria_btn
			// 
			this->victoria_btn->Location = System::Drawing::Point(80, 397);
			this->victoria_btn->Name = L"victoria_btn";
			this->victoria_btn->Size = System::Drawing::Size(129, 23);
			this->victoria_btn->TabIndex = 29;
			this->victoria_btn->Text = L"Comprobar Victoria";
			this->victoria_btn->UseVisualStyleBackColor = true;
			this->victoria_btn->Visible = false;
			this->victoria_btn->Click += gcnew System::EventHandler(this, &juego2::victoria_btn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Location = System::Drawing::Point(278, 410);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Total de movimientos:";
			this->label4->Visible = false;
			// 
			// moves_lbl
			// 
			this->moves_lbl->AutoSize = true;
			this->moves_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->moves_lbl->Location = System::Drawing::Point(395, 410);
			this->moves_lbl->Name = L"moves_lbl";
			this->moves_lbl->Size = System::Drawing::Size(10, 13);
			this->moves_lbl->TabIndex = 31;
			this->moves_lbl->Text = L".";
			this->moves_lbl->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Location = System::Drawing::Point(452, 410);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Movimientos permitidos:";
			this->label5->Visible = false;
			// 
			// permove_lbl
			// 
			this->permove_lbl->AutoSize = true;
			this->permove_lbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->permove_lbl->Location = System::Drawing::Point(588, 410);
			this->permove_lbl->Name = L"permove_lbl";
			this->permove_lbl->Size = System::Drawing::Size(10, 13);
			this->permove_lbl->TabIndex = 33;
			this->permove_lbl->Text = L".";
			this->permove_lbl->Visible = false;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &juego2::saveFileDialog1_FileOk);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 38);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Exportar pasos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &juego2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(124, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Save file";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &juego2::button2_Click);
			// 
			// ordenarnueva_btn
			// 
			this->ordenarnueva_btn->Location = System::Drawing::Point(124, 75);
			this->ordenarnueva_btn->Name = L"ordenarnueva_btn";
			this->ordenarnueva_btn->Size = System::Drawing::Size(85, 23);
			this->ordenarnueva_btn->TabIndex = 37;
			this->ordenarnueva_btn->Text = L"ORDENAR";
			this->ordenarnueva_btn->UseVisualStyleBackColor = true;
			this->ordenarnueva_btn->Click += gcnew System::EventHandler(this, &juego2::ordenarnueva_btn_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::Gold;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(725, 8);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(433, 394);
			this->dataGridView2->TabIndex = 38;
			// 
			// juego2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1170, 453);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->ordenarnueva_btn);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->permove_lbl);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->moves_lbl);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->victoria_btn);
			this->Controls->Add(this->destino_btn);
			this->Controls->Add(this->origen_btn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->modo_btn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->modo_cb);
			this->Controls->Add(this->origen_cb);
			this->Controls->Add(this->destino_cb);
			this->Controls->Add(this->gameboard_dgv);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"juego2";
			this->Text = L"juego2";
			this->Load += gcnew System::EventHandler(this, &juego2::juego2_load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gameboard_dgv))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int z = 0;
		int value, valuetake, valuebox, valuebox2;
		int z1;

		void dificultad(int dif) {
			if (dif == 1) {
				difmoves = 9999999;
				
			}
			else if (dif == 2) {
				difmoves = 50;
				
			}
			else if (dif == 3) {
				difmoves = 25;
				
			}
		}


	

	private: System::Void juego2_load(System::Object^ sender, System::EventArgs^ e) {
		
		for (int i = 0; i < p1; i++) {

			DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
			nuevacolumna->Width = 60;


			DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
			nuevacolumna->CellTemplate = cellTemplate;

			


			gameboard_dgv->Columns->Add(nuevacolumna);
			
		}
		for (int i = 0; i < tamañopilas; i++) {
			gameboard_dgv->Rows->Add();

		
		}
		int x = 0;
		int x1 = tamañopilas - 1;
		int x2 = tamañopilas - 1;
		int x3 = tamañopilas - 1;
		int x4 = tamañopilas - 1;
		int x5 = tamañopilas - 1;
		int x6 = tamañopilas - 1;
		int x7 = tamañopilas - 1;
		int x8 = tamañopilas - 1;
		String^ l;

		for (size_t i = 0; i < datos->Length; i++) {
			l = datos[i];
			if (l == "B") {
				if (x == 0) {
					lc1->InsertAtEnd(1);
					gameboard_dgv->Rows[x1]->Cells[0]->Style->BackColor = Color::Black;
					x1--;

				}
				else if (x == 1) {
					lc2->InsertAtEnd(1);
					gameboard_dgv->Rows[x2]->Cells[1]->Style->BackColor = Color::Black;
					x2--;
				}
				else if (x == 2) {
					lc3->InsertAtEnd(1);
					gameboard_dgv->Rows[x3]->Cells[2]->Style->BackColor = Color::Black;
					x3--;
				}
				else if (x == 3) {
					lc4->InsertAtEnd(1);
					gameboard_dgv->Rows[x4]->Cells[3]->Style->BackColor = Color::Black;
					x4--;
				}
				else if (x == 4) {
					lc5->InsertAtEnd(1);
					gameboard_dgv->Rows[x5]->Cells[4]->Style->BackColor = Color::Black;
					x5--;
				}
				else if (x == 5) {
					lc6->InsertAtEnd(1);
					gameboard_dgv->Rows[x6]->Cells[5]->Style->BackColor = Color::Black;
					x6--;
				}
				else if (x == 6) {
					lc7->InsertAtEnd(1);
					gameboard_dgv->Rows[x7]->Cells[6]->Style->BackColor = Color::Black;
					x7--;
				}
				else if (x == 7) {
					lc8->InsertAtEnd(1);
					gameboard_dgv->Rows[x8]->Cells[7]->Style->BackColor = Color::Black;
					x8--;
				}
			}
			else if (l == "Z") {
				if (x == 0) {
					lc1->InsertAtEnd(2);
					gameboard_dgv->Rows[x1]->Cells[0]->Style->BackColor = Color::Blue;
					x1--;
				}
				else if (x == 1) {
					lc2->InsertAtEnd(2);
					gameboard_dgv->Rows[x2]->Cells[1]->Style->BackColor = Color::Blue;
					x2--;
				}
				else if (x == 2) {
					lc3->InsertAtEnd(2);
					gameboard_dgv->Rows[x3]->Cells[2]->Style->BackColor = Color::Blue;
					x3--;
				}
				else if (x == 3) {
					lc4->InsertAtEnd(2);
					gameboard_dgv->Rows[x4]->Cells[3]->Style->BackColor = Color::Blue;
					x4--;
				}
				else if (x == 4) {
					lc5->InsertAtEnd(2);
					gameboard_dgv->Rows[x5]->Cells[4]->Style->BackColor = Color::Blue;
					x5--;
				}
				else if (x == 5) {
					lc6->InsertAtEnd(2);
					gameboard_dgv->Rows[x6]->Cells[5]->Style->BackColor = Color::Blue;
					x6--;
				}
				else if (x == 6) {
					lc7->InsertAtEnd(2);
					gameboard_dgv->Rows[x7]->Cells[6]->Style->BackColor = Color::Blue;
					x7--;
				}
				else if (x == 7) {
					lc8->InsertAtEnd(2);
					gameboard_dgv->Rows[x8]->Cells[7]->Style->BackColor = Color::Blue;
					x8--;
				}
			}
			else if (l == "W") {
				if (x == 0) {
					lc1->InsertAtEnd(3);
					gameboard_dgv->Rows[x1]->Cells[0]->Style->BackColor = Color::Gray;
					x1--;
				}
				else if (x == 1) {
					lc2->InsertAtEnd(3);
					gameboard_dgv->Rows[x2]->Cells[1]->Style->BackColor = Color::Gray;
					x2--;
				}
				else if (x == 2) {
					lc3->InsertAtEnd(3);
					gameboard_dgv->Rows[x3]->Cells[2]->Style->BackColor = Color::Gray;
					x3--;
				}
				else if (x == 3) {
					lc4->InsertAtEnd(3);
					gameboard_dgv->Rows[x4]->Cells[3]->Style->BackColor = Color::Gray;
					x4--;
				}
				else if (x == 4) {
					lc5->InsertAtEnd(3);
					gameboard_dgv->Rows[x5]->Cells[4]->Style->BackColor = Color::Gray;
					x5--;
				}
				else if (x == 5) {
					lc6->InsertAtEnd(3);
					gameboard_dgv->Rows[x6]->Cells[5]->Style->BackColor = Color::Gray;
					x6--;
				}
				else if (x == 6) {
					lc7->InsertAtEnd(3);
					gameboard_dgv->Rows[x7]->Cells[6]->Style->BackColor = Color::Gray;
					x7--;
				}
				else if (x == 7) {
					lc8->InsertAtEnd(3);
					gameboard_dgv->Rows[x8]->Cells[7]->Style->BackColor = Color::Gray;
					x8--;
				}
			}
			else if (l == "R") {
				if (x == 0) {
					lc1->InsertAtEnd(4);
					gameboard_dgv->Rows[x1]->Cells[0]->Style->BackColor = Color::Red;
					x1--;
				}
				else if (x == 1) {
					lc2->InsertAtEnd(4);
					gameboard_dgv->Rows[x2]->Cells[1]->Style->BackColor = Color::Red;
					x2--;
				}
				else if (x == 2) {
					lc3->InsertAtEnd(4);
					gameboard_dgv->Rows[x3]->Cells[2]->Style->BackColor = Color::Red;
					x3--;
				}
				else if (x == 3) {
					lc4->InsertAtEnd(4);
					gameboard_dgv->Rows[x4]->Cells[3]->Style->BackColor = Color::Red;
					x4--;
				}
				else if (x == 4) {
					lc5->InsertAtEnd(4);
					gameboard_dgv->Rows[x5]->Cells[4]->Style->BackColor = Color::Red;
					x5--;
				}
				else if (x == 5) {
					lc6->InsertAtEnd(4);
					gameboard_dgv->Rows[x6]->Cells[5]->Style->BackColor = Color::Red;
					x6--;
				}
				else if (x == 6) {
					lc7->InsertAtEnd(4);
					gameboard_dgv->Rows[x7]->Cells[6]->Style->BackColor = Color::Red;
					x7--;
				}
				else if (x == 7) {
					lc8->InsertAtEnd(4);
					gameboard_dgv->Rows[x8]->Cells[7]->Style->BackColor = Color::Red;
					x8--;
				}
			}
			else if (l == "Y") {
				if (x == 0) {
					lc1->InsertAtEnd(5);
					gameboard_dgv->Rows[x1]->Cells[0]->Style->BackColor = Color::Yellow;
					x1--;
				}
				else if (x == 1) {
					lc2->InsertAtEnd(5);
					gameboard_dgv->Rows[x2]->Cells[1]->Style->BackColor = Color::Yellow;
					x2--;
				}
				else if (x == 2) {
					lc3->InsertAtEnd(5);
					gameboard_dgv->Rows[x3]->Cells[2]->Style->BackColor = Color::Yellow;
					x3--;
				}
				else if (x == 3) {
					lc4->InsertAtEnd(5);
					gameboard_dgv->Rows[x4]->Cells[3]->Style->BackColor = Color::Yellow;
					x4--;
				}
				else if (x == 4) {
					lc5->InsertAtEnd(5);
					gameboard_dgv->Rows[x5]->Cells[4]->Style->BackColor = Color::Yellow;
					x5--;
				}
				else if (x == 5) {
					lc6->InsertAtEnd(5);
					gameboard_dgv->Rows[x6]->Cells[5]->Style->BackColor = Color::Yellow;
					x6--;
				}
				else if (x == 6) {
					lc7->InsertAtEnd(5);
					gameboard_dgv->Rows[x7]->Cells[6]->Style->BackColor = Color::Yellow;
					x7--;
				}
				else if (x == 7) {
					lc8->InsertAtEnd(5);
					gameboard_dgv->Rows[x8]->Cells[7]->Style->BackColor = Color::Yellow;
					x8--;
				}
			}
			else if (l == "G") {
				if (x == 0) {
					lc1->InsertAtEnd(6);
					gameboard_dgv->Rows[x1]->Cells[0]->Style->BackColor = Color::Green;
					x1--;
				}
				else if (x == 1) {
					lc2->InsertAtEnd(6);
					gameboard_dgv->Rows[x2]->Cells[1]->Style->BackColor = Color::Green;
					x2--;
				}
				else if (x == 2) {
					lc3->InsertAtEnd(6);
					gameboard_dgv->Rows[x3]->Cells[2]->Style->BackColor = Color::Green;
					x3--;
				}
				else if (x == 3) {
					lc4->InsertAtEnd(6);
					gameboard_dgv->Rows[x4]->Cells[3]->Style->BackColor = Color::Green;
					x4--;
				}
				else if (x == 4) {
					lc5->InsertAtEnd(6);
					gameboard_dgv->Rows[x5]->Cells[4]->Style->BackColor = Color::Green;
					x5--;
				}
				else if (x == 5) {
					lc6->InsertAtEnd(6);
					gameboard_dgv->Rows[x6]->Cells[5]->Style->BackColor = Color::Green;
					x6--;
				}
				else if (x == 6) {
					lc7->InsertAtEnd(6);
					gameboard_dgv->Rows[x7]->Cells[6]->Style->BackColor = Color::Green;
					x7--;
				}
				else if (x == 7) {
					lc8->InsertAtEnd(6);
					gameboard_dgv->Rows[x8]->Cells[7]->Style->BackColor = Color::Green;
					x8--;
				}
			}
			else if (l == "P") {
				if (x == 0) {
					lc1->InsertAtEnd(7);
					gameboard_dgv->Rows[x1]->Cells[0]->Style->BackColor = Color::Purple;
					x1--;
				}
				else if (x == 1) {
					lc2->InsertAtEnd(7);
					gameboard_dgv->Rows[x2]->Cells[1]->Style->BackColor = Color::Purple;
					x2--;
				}
				else if (x == 2) {
					lc3->InsertAtEnd(7);
					gameboard_dgv->Rows[x3]->Cells[2]->Style->BackColor = Color::Purple;
					x3--;
				}
				else if (x == 3) {
					lc4->InsertAtEnd(7);
					gameboard_dgv->Rows[x4]->Cells[3]->Style->BackColor = Color::Purple;
					x4--;
				}
				else if (x == 4) {
					lc5->InsertAtEnd(7);
					gameboard_dgv->Rows[x5]->Cells[4]->Style->BackColor = Color::Purple;
					x5--;
				}
				else if (x == 5) {
					lc6->InsertAtEnd(7);
					gameboard_dgv->Rows[x6]->Cells[5]->Style->BackColor = Color::Purple;
					x6--;
				}
				else if (x == 6) {
					lc7->InsertAtEnd(7);
					gameboard_dgv->Rows[x7]->Cells[6]->Style->BackColor = Color::Purple;
					x7--;
				}
				else if (x == 7) {
					lc8->InsertAtEnd(7);
					gameboard_dgv->Rows[x8]->Cells[7]->Style->BackColor = Color::Purple;
					x8--;
				}
			}
			else if (l == "N") {
				if (x == 0) {
					lc1->InsertAtEnd(8);
					gameboard_dgv->Rows[x1]->Cells[0]->Style->BackColor = Color::DarkBlue;
					x1--;
				}
				else if (x == 1) {
					lc2->InsertAtEnd(8);
					gameboard_dgv->Rows[x2]->Cells[1]->Style->BackColor = Color::DarkBlue;
					x2--;
				}
				else if (x == 2) {
					lc3->InsertAtEnd(8);
					gameboard_dgv->Rows[x3]->Cells[2]->Style->BackColor = Color::DarkBlue;
					x3--;
				}
				else if (x == 3) {
					lc4->InsertAtEnd(8);
					gameboard_dgv->Rows[x4]->Cells[3]->Style->BackColor = Color::DarkBlue;
					x4--;
				}
				else if (x == 4) {
					lc5->InsertAtEnd(8);
					gameboard_dgv->Rows[x5]->Cells[4]->Style->BackColor = Color::DarkBlue;
					x5--;
				}
				else if (x == 5) {
					lc6->InsertAtEnd(8);
					gameboard_dgv->Rows[x6]->Cells[5]->Style->BackColor = Color::DarkBlue;
					x6--;
				}
				else if (x == 6) {
					lc7->InsertAtEnd(8);
					gameboard_dgv->Rows[x7]->Cells[6]->Style->BackColor = Color::DarkBlue;
					x7--;
				}
				else if (x == 7) {
					lc8->InsertAtEnd(8);
					gameboard_dgv->Rows[x8]->Cells[7]->Style->BackColor = Color::DarkBlue;
					x8--;
				}
			}
			else if (l == "X" || l == "x") {
				x++;
			}
		}
		if (mpila == true) {
	
			ordenamiento(choosemode);
			for (int i = 0; i < p1; i++) {
				origen_cb->Items->Add("Lista " + (i + 1));
				destino_cb->Items->Add("Lista " + (i + 1));
			}
		}
		else {
			ordenamiento(choosemode);
		}
	}
		   void ordenamiento(int numero) {
			   if (numero == 1) {
				
				   dificultad(difp);
			   }
			   else if (numero == 2) {
				
				   dificultad(difp);
			   }
			   else {
				 
				   dificultad(difp);
			   }
		   }

	





	
	



	private: System::Void modo_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		modo_cb->Visible = false;
		modo_btn->Visible = false;
		if (modo_cb->SelectedIndex == 0) {

			choosemode = 1;
		
		}
		else if (modo_cb->SelectedIndex == 1) {
			choosemode = 2;
			
		}
	}
	private: System::Void origen_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		valuebox = origen_cb->SelectedIndex;
		origen_cb->Visible = false;
		destino_cb->Visible = true;
		origen_btn->Visible = false;
		destino_btn->Visible = true;
		if (choosemode == 1) {
			if (valuebox == 0) {
				if (lc1->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc1->GetValueAtEnd();
					lc1->ExtractAtEnd();
				}
			}
			else if (valuebox == 1) {
				if (lc2->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc2->GetValueAtEnd();
					lc2->ExtractAtEnd();
				}
			}
			else if (valuebox == 2) {
				if (lc3->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc3->GetValueAtEnd();
					lc3->ExtractAtEnd();
				}
			}
			else if (valuebox == 3) {
				if (lc4->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc4->GetValueAtEnd();
					lc4->ExtractAtEnd();
				}
			}
			else if (valuebox == 4) {
				if (lc5->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc5->GetValueAtEnd();
					lc5->ExtractAtEnd();
				}
			}
			else if (valuebox == 5) {
				if (lc6->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc6->GetValueAtEnd();
					lc6->ExtractAtEnd();
				}
			}
			else if (valuebox == 6) {
				if (lc7->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc7->GetValueAtEnd();
					lc7->ExtractAtEnd();
				}
			}
			else if (valuebox == 7) {
				if (lc8->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc8->GetValueAtEnd();
					lc8->ExtractAtEnd();
				}
			}
		}
		else if (choosemode == 2) {
			if (valuebox == 0) {
				if (lc1->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc1->GetValueAtStart();
					lc1->ExtractAtStart();
				}
			}
			else if (valuebox == 1) {
				if (lc2->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc2->GetValueAtStart();
					lc2->ExtractAtStart();
				}
			}
			else if (valuebox == 2) {
				if (lc3->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc3->GetValueAtStart();
					lc3->ExtractAtStart();
				}
			}
			else if (valuebox == 3) {
				if (lc4->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc4->GetValueAtStart();
					lc4->ExtractAtStart();
				}
			}
			else if (valuebox == 4) {
				if (lc5->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc5->GetValueAtStart();
					lc5->ExtractAtStart();
				}
			}
			else if (valuebox == 5) {
				if (lc6->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc6->GetValueAtStart();
					lc6->ExtractAtStart();
				}
			}
			else if (valuebox == 6) {
				if (lc7->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc7->GetValueAtStart();
					lc7->ExtractAtStart();
				}
			}
			else if (valuebox == 7) {
				if (lc8->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					destino_cb->Visible = false;
					origen_cb->Visible = true;
					origen_btn->Visible = true;
					destino_btn->Visible = false;
				}
				else {
					value = lc8->GetValueAtStart();
					lc8->ExtractAtStart();
				}
			}
		}
	}
	private: System::Void destino_btn_Click(System::Object^ sender, System::EventArgs^ e) {



		if (movimientos == difmoves) {
			MessageBox::Show("Superaste el número de movimientos máximos!", "GAME OVER", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Application::Restart();
		}
		movimientos++;
		valuebox2 = destino_cb->SelectedIndex;
		destino_cb->Visible = false;
		modo_cb->Visible = true;
		modo_btn->Visible = true;
		destino_btn->Visible = false;
		moves_lbl->Text = "" + movimientos;


		if (valuebox2 == 0) {
			if (lc1->Total() < tamañopilas) {
				lc1->InsertAtEnd(value);
				for (int i = 0; i < p1; i++) {
					int x = tamañopilas - 1;
					int y = 0;
					int z = 0;
					if (i == 0) {
						z1 = lc1->Total();
						for (int t1 = (tamañopilas - 1); t1 >= 0; t1--) {
							if (z1 > t1)
							{

								if (lc1->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc1->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc1->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc1->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc1->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc1->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc1->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc1->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 1) {
						z1 = lc2->Total();
						for (int t2 = (tamañopilas - 1); t2 >= 0; t2--) {
							if (z1 > t2)
							{
								if (lc2->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc2->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc2->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc2->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc2->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc2->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc2->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc2->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 2) {
						z1 = lc3->Total();
						for (int t3 = (tamañopilas - 1); t3 >= 0; t3--) {
							if (z1 > t3)
							{
								if (lc3->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc3->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc3->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc3->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc3->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc3->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc3->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc3->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 3) {
						z1 = lc4->Total();
						for (int t4 = (tamañopilas - 1); t4 >= 0; t4--) {
							if (z1 > t4)
							{
								if (lc4->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc4->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc4->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc4->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc4->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc4->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc4->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc4->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 4) {
						z1 = lc5->Total();
						for (int t5 = (tamañopilas - 1); t5 >= 0; t5--) {
							if (z1 > t5)
							{
								if (lc5->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc5->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc5->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc5->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc5->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc5->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc5->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc5->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 5) {
						z1 = lc6->Total();
						for (int t6 = (tamañopilas - 1); t6 >= 0; t6--) {
							if (z1 > t6)
							{
								if (lc6->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc6->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc6->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc6->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc6->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc6->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc6->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc6->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 6) {
						z1 = lc7->Total();
						for (int t7 = (tamañopilas - 1); t7 >= 0; t7--) {
							if (z1 > t7)
							{
								if (lc7->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc7->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc7->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc7->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc7->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc7->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc7->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc7->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 7) {
						z1 = lc8->Total();
						for (int t8 = (tamañopilas - 1); t8 >= 0; t8--) {
							if (z1 > t8)
							{
								if (lc8->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc8->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc8->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc8->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc8->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc8->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc8->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc8->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
				}
				if (choosemode == 1) {
					step += "Movimiento: En modo: Pila, " + "P(" + (valuebox + 1) + ") a " + "P(" + (valuebox2 + 1) + ")" + "\r\n";
				}
				else if (choosemode == 2) {
					step += "Movimiento: En modo: Cola, " + "C(" + (valuebox + 1) + ") a " + "C(" + (valuebox2 + 1) + ")" + "\r\n";
				}


			}
			else {
				MessageBox::Show("Ya no puede ingresar datos en este grupo", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				destino_cb->Visible = true;
				modo_cb->Visible = false;
				modo_btn->Visible = false;
				destino_btn->Visible = true;
				movimientos--;
			}
		}
		else if (valuebox2 == 1) {
			if (lc2->Total() < tamañopilas) {
				lc2->InsertAtEnd(value);
				for (int i = 0; i < p1; i++) {
					int x = tamañopilas - 1;
					int y = 0;
					int z = 0;
					if (i == 0) {
						z1 = lc1->Total();
						for (int t1 = (tamañopilas - 1); t1 >= 0; t1--) {
							if (z1 > t1)
							{

								if (lc1->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc1->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc1->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc1->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc1->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc1->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc1->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc1->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 1) {
						z1 = lc2->Total();
						for (int t2 = (tamañopilas - 1); t2 >= 0; t2--) {
							if (z1 > t2)
							{
								if (lc2->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc2->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc2->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc2->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc2->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc2->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc2->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc2->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 2) {
						z1 = lc3->Total();
						for (int t3 = (tamañopilas - 1); t3 >= 0; t3--) {
							if (z1 > t3)
							{
								if (lc3->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc3->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc3->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc3->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc3->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc3->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc3->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc3->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 3) {
						z1 = lc4->Total();
						for (int t4 = (tamañopilas - 1); t4 >= 0; t4--) {
							if (z1 > t4)
							{
								if (lc4->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc4->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc4->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc4->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc4->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc4->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc4->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc4->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 4) {
						z1 = lc5->Total();
						for (int t5 = (tamañopilas - 1); t5 >= 0; t5--) {
							if (z1 > t5)
							{
								if (lc5->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc5->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc5->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc5->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc5->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc5->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc5->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc5->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 5) {
						z1 = lc6->Total();
						for (int t6 = (tamañopilas - 1); t6 >= 0; t6--) {
							if (z1 > t6)
							{
								if (lc6->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc6->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc6->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc6->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc6->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc6->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc6->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc6->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 6) {
						z1 = lc7->Total();
						for (int t7 = (tamañopilas - 1); t7 >= 0; t7--) {
							if (z1 > t7)
							{
								if (lc7->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc7->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc7->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc7->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc7->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc7->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc7->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc7->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 7) {
						z1 = lc8->Total();
						for (int t8 = (tamañopilas - 1); t8 >= 0; t8--) {
							if (z1 > t8)
							{
								if (lc8->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc8->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc8->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc8->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc8->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc8->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc8->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc8->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
				}
				if (choosemode == 1) {
					step += "Movimiento: En modo: Pila, " + "P(" + (valuebox + 1) + ") a " + "P(" + (valuebox2 + 1) + ")" + "\r\n";
				}
				else if (choosemode == 2) {
					step += "Movimiento: En modo: Cola, " + "C(" + (valuebox + 1) + ") a " + "C(" + (valuebox2 + 1) + ")" + "\r\n";
				}


			}
			else {
				MessageBox::Show("Ya no puede ingresar datos en este grupo", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				destino_cb->Visible = true;
				modo_cb->Visible = false;
				modo_btn->Visible = false;
				destino_btn->Visible = true;
				movimientos--;
			}
		}
		else if (valuebox2 == 2) {
			if (lc3->Total() < tamañopilas) {
				lc3->InsertAtEnd(value);
				for (int i = 0; i < p1; i++) {
					int x = tamañopilas - 1;
					int y = 0;
					int z = 0;
					if (i == 0) {
						z1 = lc1->Total();
						for (int t1 = (tamañopilas - 1); t1 >= 0; t1--) {
							if (z1 > t1)
							{

								if (lc1->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc1->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc1->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc1->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc1->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc1->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc1->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc1->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 1) {
						z1 = lc2->Total();
						for (int t2 = (tamañopilas - 1); t2 >= 0; t2--) {
							if (z1 > t2)
							{
								if (lc2->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc2->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc2->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc2->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc2->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc2->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc2->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc2->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 2) {
						z1 = lc3->Total();
						for (int t3 = (tamañopilas - 1); t3 >= 0; t3--) {
							if (z1 > t3)
							{
								if (lc3->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc3->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc3->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc3->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc3->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc3->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc3->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc3->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 3) {
						z1 = lc4->Total();
						for (int t4 = (tamañopilas - 1); t4 >= 0; t4--) {
							if (z1 > t4)
							{
								if (lc4->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc4->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc4->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc4->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc4->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc4->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc4->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc4->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 4) {
						z1 = lc5->Total();
						for (int t5 = (tamañopilas - 1); t5 >= 0; t5--) {
							if (z1 > t5)
							{
								if (lc5->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc5->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc5->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc5->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc5->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc5->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc5->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc5->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 5) {
						z1 = lc6->Total();
						for (int t6 = (tamañopilas - 1); t6 >= 0; t6--) {
							if (z1 > t6)
							{
								if (lc6->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc6->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc6->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc6->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc6->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc6->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc6->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc6->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 6) {
						z1 = lc7->Total();
						for (int t7 = (tamañopilas - 1); t7 >= 0; t7--) {
							if (z1 > t7)
							{
								if (lc7->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc7->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc7->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc7->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc7->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc7->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc7->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc7->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 7) {
						z1 = lc8->Total();
						for (int t8 = (tamañopilas - 1); t8 >= 0; t8--) {
							if (z1 > t8)
							{
								if (lc8->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc8->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc8->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc8->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc8->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc8->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc8->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc8->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
				}
				if (choosemode == 1) {
					step += "Movimiento: En modo: Pila, " + "P(" + (valuebox + 1) + ") a " + "P(" + (valuebox2 + 1) + ")" + "\r\n";
				}
				else if (choosemode == 2) {
					step += "Movimiento: En modo: Cola, " + "C(" + (valuebox + 1) + ") a " + "C(" + (valuebox2 + 1) + ")" + "\r\n";
				}


			}
			else {
				MessageBox::Show("Ya no puede ingresar datos en este grupo", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				destino_cb->Visible = true;
				modo_cb->Visible = false;
				modo_btn->Visible = false;
				destino_btn->Visible = true;
				movimientos--;
			}
		}
		else if (valuebox2 == 3) {
			if (lc4->Total() < tamañopilas) {
				lc4->InsertAtEnd(value);
				for (int i = 0; i < p1; i++) {
					int x = tamañopilas - 1;
					int y = 0;
					int z = 0;
					if (i == 0) {
						z1 = lc1->Total();
						for (int t1 = (tamañopilas - 1); t1 >= 0; t1--) {
							if (z1 > t1)
							{

								if (lc1->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc1->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc1->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc1->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc1->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc1->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc1->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc1->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 1) {
						z1 = lc2->Total();
						for (int t2 = (tamañopilas - 1); t2 >= 0; t2--) {
							if (z1 > t2)
							{
								if (lc2->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc2->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc2->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc2->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc2->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc2->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc2->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc2->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 2) {
						z1 = lc3->Total();
						for (int t3 = (tamañopilas - 1); t3 >= 0; t3--) {
							if (z1 > t3)
							{
								if (lc3->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc3->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc3->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc3->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc3->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc3->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc3->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc3->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 3) {
						z1 = lc4->Total();
						for (int t4 = (tamañopilas - 1); t4 >= 0; t4--) {
							if (z1 > t4)
							{
								if (lc4->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc4->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc4->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc4->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc4->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc4->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc4->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc4->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 4) {
						z1 = lc5->Total();
						for (int t5 = (tamañopilas - 1); t5 >= 0; t5--) {
							if (z1 > t5)
							{
								if (lc5->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc5->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc5->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc5->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc5->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc5->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc5->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc5->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 5) {
						z1 = lc6->Total();
						for (int t6 = (tamañopilas - 1); t6 >= 0; t6--) {
							if (z1 > t6)
							{
								if (lc6->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc6->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc6->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc6->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc6->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc6->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc6->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc6->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 6) {
						z1 = lc7->Total();
						for (int t7 = (tamañopilas - 1); t7 >= 0; t7--) {
							if (z1 > t7)
							{
								if (lc7->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc7->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc7->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc7->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc7->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc7->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc7->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc7->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 7) {
						z1 = lc8->Total();
						for (int t8 = (tamañopilas - 1); t8 >= 0; t8--) {
							if (z1 > t8)
							{
								if (lc8->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc8->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc8->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc8->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc8->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc8->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc8->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc8->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
				}
				if (choosemode == 1) {
					step += "Movimiento: En modo: Pila, " + "P(" + (valuebox + 1) + ") a " + "P(" + (valuebox2 + 1) + ")" + "\r\n";
				}
				else if (choosemode == 2) {
					step += "Movimiento: En modo: Cola, " + "C(" + (valuebox + 1) + ") a " + "C(" + (valuebox2 + 1) + ")" + "\r\n";
				}
			}
		}
		else if (valuebox2 == 4) {
			if (lc5->Total() < tamañopilas) {
				lc5->InsertAtEnd(value);
				for (int i = 0; i < p1; i++) {
					int x = tamañopilas - 1;
					int y = 0;
					int z = 0;
					if (i == 0) {
						z1 = lc1->Total();
						for (int t1 = (tamañopilas - 1); t1 >= 0; t1--) {
							if (z1 > t1)
							{

								if (lc1->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc1->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc1->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc1->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc1->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc1->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc1->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc1->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 1) {
						z1 = lc2->Total();
						for (int t2 = (tamañopilas - 1); t2 >= 0; t2--) {
							if (z1 > t2)
							{
								if (lc2->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc2->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc2->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc2->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc2->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc2->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc2->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc2->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 2) {
						z1 = lc3->Total();
						for (int t3 = (tamañopilas - 1); t3 >= 0; t3--) {
							if (z1 > t3)
							{
								if (lc3->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc3->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc3->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc3->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc3->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc3->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc3->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc3->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 3) {
						z1 = lc4->Total();
						for (int t4 = (tamañopilas - 1); t4 >= 0; t4--) {
							if (z1 > t4)
							{
								if (lc4->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc4->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc4->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc4->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc4->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc4->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc4->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc4->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 4) {
						z1 = lc5->Total();
						for (int t5 = (tamañopilas - 1); t5 >= 0; t5--) {
							if (z1 > t5)
							{
								if (lc5->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc5->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc5->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc5->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc5->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc5->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc5->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc5->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 5) {
						z1 = lc6->Total();
						for (int t6 = (tamañopilas - 1); t6 >= 0; t6--) {
							if (z1 > t6)
							{
								if (lc6->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc6->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc6->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc6->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc6->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc6->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc6->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc6->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 6) {
						z1 = lc7->Total();
						for (int t7 = (tamañopilas - 1); t7 >= 0; t7--) {
							if (z1 > t7)
							{
								if (lc7->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc7->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc7->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc7->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc7->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc7->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc7->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc7->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 7) {
						z1 = lc8->Total();
						for (int t8 = (tamañopilas - 1); t8 >= 0; t8--) {
							if (z1 > t8)
							{
								if (lc8->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc8->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc8->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc8->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc8->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc8->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc8->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc8->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
				}
				if (choosemode == 1) {
					step += "Movimiento: En modo: Pila, " + "P(" + (valuebox + 1) + ") a " + "P(" + (valuebox2 + 1) + ")" + "\r\n";
				}
				else if (choosemode == 2) {
					step += "Movimiento: En modo: Cola, " + "C(" + (valuebox + 1) + ") a " + "C(" + (valuebox2 + 1) + ")" + "\r\n";
				}
			}
		}
		else if (valuebox2 == 5) {
			if (lc6->Total() < tamañopilas) {
				lc6->InsertAtEnd(value);
				for (int i = 0; i < p1; i++) {
					int x = tamañopilas - 1;
					int y = 0;
					int z = 0;
					if (i == 0) {
						z1 = lc1->Total();
						for (int t1 = (tamañopilas - 1); t1 >= 0; t1--) {
							if (z1 > t1)
							{

								if (lc1->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc1->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc1->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc1->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc1->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc1->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc1->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc1->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 1) {
						z1 = lc2->Total();
						for (int t2 = (tamañopilas - 1); t2 >= 0; t2--) {
							if (z1 > t2)
							{
								if (lc2->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc2->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc2->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc2->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc2->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc2->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc2->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc2->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 2) {
						z1 = lc3->Total();
						for (int t3 = (tamañopilas - 1); t3 >= 0; t3--) {
							if (z1 > t3)
							{
								if (lc3->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc3->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc3->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc3->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc3->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc3->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc3->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc3->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 3) {
						z1 = lc4->Total();
						for (int t4 = (tamañopilas - 1); t4 >= 0; t4--) {
							if (z1 > t4)
							{
								if (lc4->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc4->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc4->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc4->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc4->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc4->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc4->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc4->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 4) {
						z1 = lc5->Total();
						for (int t5 = (tamañopilas - 1); t5 >= 0; t5--) {
							if (z1 > t5)
							{
								if (lc5->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc5->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc5->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc5->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc5->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc5->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc5->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc5->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 5) {
						z1 = lc6->Total();
						for (int t6 = (tamañopilas - 1); t6 >= 0; t6--) {
							if (z1 > t6)
							{
								if (lc6->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc6->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc6->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc6->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc6->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc6->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc6->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc6->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 6) {
						z1 = lc7->Total();
						for (int t7 = (tamañopilas - 1); t7 >= 0; t7--) {
							if (z1 > t7)
							{
								if (lc7->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc7->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc7->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc7->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc7->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc7->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc7->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc7->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 7) {
						z1 = lc8->Total();
						for (int t8 = (tamañopilas - 1); t8 >= 0; t8--) {
							if (z1 > t8)
							{
								if (lc8->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc8->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc8->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc8->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc8->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc8->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc8->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc8->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
				}
				if (choosemode == 1) {
					step += "Movimiento: En modo: Pila, " + "P(" + (valuebox + 1) + ") a " + "P(" + (valuebox2 + 1) + ")" + "\r\n";
				}
				else if (choosemode == 2) {
					step += "Movimiento: En modo: Cola, " + "C(" + (valuebox + 1) + ") a " + "C(" + (valuebox2 + 1) + ")" + "\r\n";
				}
			}
		}
		else if (valuebox2 == 6) {
			if (lc7->Total() < tamañopilas) {
				lc7->InsertAtEnd(value);
				for (int i = 0; i < p1; i++) {
					int x = tamañopilas - 1;
					int y = 0;
					int z = 0;
					if (i == 0) {
						z1 = lc1->Total();
						for (int t1 = (tamañopilas - 1); t1 >= 0; t1--) {
							if (z1 > t1)
							{

								if (lc1->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc1->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc1->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc1->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc1->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc1->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc1->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc1->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 1) {
						z1 = lc2->Total();
						for (int t2 = (tamañopilas - 1); t2 >= 0; t2--) {
							if (z1 > t2)
							{
								if (lc2->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc2->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc2->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc2->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc2->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc2->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc2->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc2->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 2) {
						z1 = lc3->Total();
						for (int t3 = (tamañopilas - 1); t3 >= 0; t3--) {
							if (z1 > t3)
							{
								if (lc3->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc3->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc3->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc3->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc3->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc3->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc3->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc3->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 3) {
						z1 = lc4->Total();
						for (int t4 = (tamañopilas - 1); t4 >= 0; t4--) {
							if (z1 > t4)
							{
								if (lc4->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc4->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc4->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc4->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc4->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc4->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc4->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc4->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 4) {
						z1 = lc5->Total();
						for (int t5 = (tamañopilas - 1); t5 >= 0; t5--) {
							if (z1 > t5)
							{
								if (lc5->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc5->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc5->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc5->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc5->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc5->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc5->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc5->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 5) {
						z1 = lc6->Total();
						for (int t6 = (tamañopilas - 1); t6 >= 0; t6--) {
							if (z1 > t6)
							{
								if (lc6->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc6->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc6->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc6->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc6->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc6->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc6->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc6->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 6) {
						z1 = lc7->Total();
						for (int t7 = (tamañopilas - 1); t7 >= 0; t7--) {
							if (z1 > t7)
							{
								if (lc7->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc7->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc7->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc7->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc7->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc7->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc7->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc7->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 7) {
						z1 = lc8->Total();
						for (int t8 = (tamañopilas - 1); t8 >= 0; t8--) {
							if (z1 > t8)
							{
								if (lc8->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc8->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc8->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc8->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc8->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc8->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc8->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc8->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
				}
				if (choosemode == 1) {
					step += "Movimiento: En modo: Pila, " + "P(" + (valuebox + 1) + ") a " + "P(" + (valuebox2 + 1) + ")" + "\r\n";
				}
				else if (choosemode == 2) {
					step += "Movimiento: En modo: Cola, " + "C(" + (valuebox + 1) + ") a " + "C(" + (valuebox2 + 1) + ")" + "\r\n";
				}
			}
		}
		else if (valuebox2 == 7) {
			if (lc8->Total() < tamañopilas) {
				lc8->InsertAtEnd(value);
				for (int i = 0; i < p1; i++) {
					int x = tamañopilas - 1;
					int y = 0;
					int z = 0;
					if (i == 0) {
						z1 = lc1->Total();
						for (int t1 = (tamañopilas - 1); t1 >= 0; t1--) {
							if (z1 > t1)
							{

								if (lc1->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc1->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc1->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc1->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc1->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc1->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc1->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc1->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 1) {
						z1 = lc2->Total();
						for (int t2 = (tamañopilas - 1); t2 >= 0; t2--) {
							if (z1 > t2)
							{
								if (lc2->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc2->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc2->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc2->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc2->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc2->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc2->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc2->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 2) {
						z1 = lc3->Total();
						for (int t3 = (tamañopilas - 1); t3 >= 0; t3--) {
							if (z1 > t3)
							{
								if (lc3->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc3->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc3->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc3->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc3->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc3->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc3->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc3->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 3) {
						z1 = lc4->Total();
						for (int t4 = (tamañopilas - 1); t4 >= 0; t4--) {
							if (z1 > t4)
							{
								if (lc4->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc4->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc4->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc4->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc4->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc4->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc4->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc4->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 4) {
						z1 = lc5->Total();
						for (int t5 = (tamañopilas - 1); t5 >= 0; t5--) {
							if (z1 > t5)
							{
								if (lc5->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc5->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc5->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc5->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc5->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc5->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc5->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc5->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 5) {
						z1 = lc6->Total();
						for (int t6 = (tamañopilas - 1); t6 >= 0; t6--) {
							if (z1 > t6)
							{
								if (lc6->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc6->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc6->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc6->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc6->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc6->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc6->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc6->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 6) {
						z1 = lc7->Total();
						for (int t7 = (tamañopilas - 1); t7 >= 0; t7--) {
							if (z1 > t7)
							{
								if (lc7->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc7->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc7->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc7->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc7->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc7->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc7->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc7->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
					else if (i == 7) {
						z1 = lc8->Total();
						for (int t8 = (tamañopilas - 1); t8 >= 0; t8--) {
							if (z1 > t8)
							{
								if (lc8->GetValue(y) == 1) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Black;
								}
								else if (lc8->GetValue(y) == 2) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Blue;
								}
								else if (lc8->GetValue(y) == 3) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Gray;
								}
								else if (lc8->GetValue(y) == 4) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Red;
								}
								else if (lc8->GetValue(y) == 5) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Yellow;
								}
								else if (lc8->GetValue(y) == 6) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Green;
								}
								else if (lc8->GetValue(y) == 7) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::Purple;
								}
								else if (lc8->GetValue(y) == 8) {
									gameboard_dgv->Rows[x]->Cells[i]->Style->BackColor = Color::DarkBlue;
								}
								x--;
								y++;
							}
							else
							{
								gameboard_dgv->Rows[z]->Cells[i]->Style->BackColor = Color::White;
								z++;
							}

						}
					}
				}
				if (choosemode == 1) {
					step += "Movimiento: En modo: Pila, " + "P(" + (valuebox + 1) + ") a " + "P(" + (valuebox2 + 1) + ")" + "\r\n";
				}
				else if (choosemode == 2) {
					step += "Movimiento: En modo: Cola, " + "C(" + (valuebox + 1) + ") a " + "C(" + (valuebox2 + 1) + ")" + "\r\n";
				}
			}
		}
	}
	private: System::Void victoria_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (p1 == 2)
		{
			z1 = lc1->Total();
			for (int t1 = 0; t1 < z1; t1++) {
				if (lc1->GetValue(0) == lc1->GetValueAtEnd() && lc1->GetValue(t1) == lc1->GetValueAtEnd()) {
					if (lc2->GetValue(0) == lc2->GetValueAtEnd() && lc2->GetValue(t1) == lc2->GetValueAtEnd()) {
						win = true;
						if (win == true)
						{
							MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
							Application::Restart();
							break;
						}
					}
				}
			}
		}

		if (p1 == 3)
		{
			z1 = lc1->Total();
			for (int t1 = 0; t1 < z1; t1++) {
				if (lc1->GetValue(0) == lc1->GetValueAtEnd() && lc1->GetValue(t1) == lc1->GetValueAtEnd()) {
					if (lc2->GetValue(0) == lc2->GetValueAtEnd() && lc2->GetValue(t1) == lc2->GetValueAtEnd()) {
						if (lc3->GetValue(0) == lc3->GetValueAtEnd() && lc3->GetValue(t1) == lc3->GetValueAtEnd())
						{
							win = true;
							if (win == true)
							{
								MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
								Application::Restart();
								break;
							}
						}
					}
				}
			}
		}

		if (p1 == 4)
		{
			z1 = lc1->Total();
			for (int t1 = 0; t1 < z1; t1++) {
				if (lc1->GetValue(0) == lc1->GetValueAtEnd() && lc1->GetValue(t1) == lc1->GetValueAtEnd()) {
					if (lc2->GetValue(0) == lc2->GetValueAtEnd() && lc2->GetValue(t1) == lc2->GetValueAtEnd()) {
						if (lc3->GetValue(0) == lc3->GetValueAtEnd() && lc3->GetValue(t1) == lc3->GetValueAtEnd()) {
							if (lc4->GetValue(0) == lc4->GetValueAtEnd() && lc4->GetValue(t1) == lc4->GetValueAtEnd())
							{
								win = true;
								if (win == true)
								{
									MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
									Application::Restart();
									break;
								}
							}
						}
					}
				}
			}
		}

		if (p1 == 5)
		{
			z1 = lc1->Total();
			for (int t1 = 0; t1 < z1; t1++) {
				if (lc1->GetValue(0) == lc1->GetValueAtEnd() && lc1->GetValue(t1) == lc1->GetValueAtEnd()) {
					if (lc2->GetValue(0) == lc2->GetValueAtEnd() && lc2->GetValue(t1) == lc2->GetValueAtEnd()) {
						if (lc3->GetValue(0) == lc3->GetValueAtEnd() && lc3->GetValue(t1) == lc3->GetValueAtEnd()) {
							if (lc4->GetValue(0) == lc4->GetValueAtEnd() && lc4->GetValue(t1) == lc4->GetValueAtEnd()) {
								if (lc5->GetValue(0) == lc5->GetValueAtEnd() && lc5->GetValue(t1) == lc5->GetValueAtEnd())
								{
									win = true;
									if (win == true)
									{
										MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
										Application::Restart();
										break;
									}
								}
							}
						}
					}
				}
			}
		}

		if (p1 == 6)
		{
			z1 = lc1->Total();
			for (int t1 = 0; t1 < z1; t1++) {
				if (lc1->GetValue(0) == lc1->GetValueAtEnd() && lc1->GetValue(t1) == lc1->GetValueAtEnd()) {
					if (lc2->GetValue(0) == lc2->GetValueAtEnd() && lc2->GetValue(t1) == lc2->GetValueAtEnd()) {
						if (lc3->GetValue(0) == lc3->GetValueAtEnd() && lc3->GetValue(t1) == lc3->GetValueAtEnd()) {
							if (lc4->GetValue(0) == lc4->GetValueAtEnd() && lc4->GetValue(t1) == lc4->GetValueAtEnd()) {
								if (lc5->GetValue(0) == lc5->GetValueAtEnd() && lc5->GetValue(t1) == lc5->GetValueAtEnd()) {
									if (lc6->GetValue(0) == lc6->GetValueAtEnd() && lc6->GetValue(t1) == lc6->GetValueAtEnd())
									{
										win = true;
										if (win == true)
										{
											MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
											Application::Restart();
											break;
										}
									}
								}
							}
						}
					}
				}
			}
		}

		if (p1 == 7)
		{
			z1 = lc1->Total();
			for (int t1 = 0; t1 < z1; t1++) {
				if (lc1->GetValue(0) == lc1->GetValueAtEnd() && lc1->GetValue(t1) == lc1->GetValueAtEnd()) {
					if (lc2->GetValue(0) == lc2->GetValueAtEnd() && lc2->GetValue(t1) == lc2->GetValueAtEnd()) {
						if (lc3->GetValue(0) == lc3->GetValueAtEnd() && lc3->GetValue(t1) == lc3->GetValueAtEnd()) {
							if (lc4->GetValue(0) == lc4->GetValueAtEnd() && lc4->GetValue(t1) == lc4->GetValueAtEnd()) {
								if (lc5->GetValue(0) == lc5->GetValueAtEnd() && lc5->GetValue(t1) == lc5->GetValueAtEnd()) {
									if (lc6->GetValue(0) == lc6->GetValueAtEnd() && lc6->GetValue(t1) == lc6->GetValueAtEnd()) {
										if (lc6->GetValue(0) == lc7->GetValueAtEnd() && lc7->GetValue(t1) == lc7->GetValueAtEnd())
										{
											win = true;
											if (win == true)
											{
												MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
												Application::Restart();
												break;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

		if (p1 == 8)
		{
			z1 = lc1->Total();
			for (int t1 = 0; t1 < z1; t1++) {
				if (lc1->GetValue(0) == lc1->GetValueAtEnd() && lc1->GetValue(t1) == lc1->GetValueAtEnd()) {
					if (lc2->GetValue(0) == lc2->GetValueAtEnd() && lc2->GetValue(t1) == lc2->GetValueAtEnd()) {
						if (lc3->GetValue(0) == lc3->GetValueAtEnd() && lc3->GetValue(t1) == lc3->GetValueAtEnd()) {
							if (lc4->GetValue(0) == lc4->GetValueAtEnd() && lc4->GetValue(t1) == lc4->GetValueAtEnd()) {
								if (lc5->GetValue(0) == lc5->GetValueAtEnd() && lc5->GetValue(t1) == lc5->GetValueAtEnd()) {
									if (lc6->GetValue(0) == lc6->GetValueAtEnd() && lc6->GetValue(t1) == lc6->GetValueAtEnd()) {
										if (lc7->GetValue(0) == lc7->GetValueAtEnd() && lc7->GetValue(t1) == lc7->GetValueAtEnd()) {
											if (lc8->GetValue(0) == lc8->GetValueAtEnd() && lc8->GetValue(t1) == lc8->GetValueAtEnd())
											{
												win = true;
												if (win == true)
												{
													MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
													Application::Restart();
													break;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}







		if (win == false)
		{
			MessageBox::Show("Aun no has terminado! Revisa tu tabla!", "Espera!", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}



	private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			File::WriteAllText(saveFileDialog1->FileName, step);
			MessageBox::Show("Se guardó el archivo", "Save!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No se exportó el archivo", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}



	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		step2 = "";
		saveFileDialog2->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		if (saveFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			for (int i = 0; i < p1; i++) {
				for (int m = tamañopilas - 1; m >= 0; m--) {
					if (gameboard_dgv->Rows[m]->Cells[i]->Style->BackColor == Color::Black) {
						step2 += "B,";
					}
					else if (gameboard_dgv->Rows[m]->Cells[i]->Style->BackColor == Color::Blue) {
						step2 += "Z,";
					}
					else if (gameboard_dgv->Rows[m]->Cells[i]->Style->BackColor == Color::Gray) {
						step2 += "W,";
					}
					else if (gameboard_dgv->Rows[m]->Cells[i]->Style->BackColor == Color::Red) {
						step2 += "R,";
					}
					else if (gameboard_dgv->Rows[m]->Cells[i]->Style->BackColor == Color::Yellow) {
						step2 += "Y,";
					}
					else if (gameboard_dgv->Rows[m]->Cells[i]->Style->BackColor == Color::Green) {
						step2 += "G,";
					}
					else if (gameboard_dgv->Rows[m]->Cells[i]->Style->BackColor == Color::Purple) {
						step2 += "P,";
					}
					else if (gameboard_dgv->Rows[m]->Cells[i]->Style->BackColor == Color::DarkBlue) {
						step2 += "N,";
					}
				}
				if (i == (p1 - 1)) {

				}
				else {
					step2 += "X,";
				}
			}
			File::WriteAllText(saveFileDialog2->FileName, step2->Substring(0, step2->Length - 1));
			MessageBox::Show("Gurdado exitoso!", "Guardado", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No se pudo exportar", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

		   


	private: System::Void ordenarnueva_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		int num, x1 = tamañopilas - 1, x2 = tamañopilas - 1, x3 = tamañopilas - 1, x4 = tamañopilas - 1, x5 = tamañopilas - 1, x6 = tamañopilas - 1, x7 = tamañopilas - 1, x8 = tamañopilas - 1,xc1 = 0, xc2 = 0, xc3 = 0, xc4 = 0, xc5 = 0, xc6 = 0, xc7 = 0, xc8 = 0;
		while (lc1->isEmpty() != true)
		{
			if (choosemode == 2)
			{
				num = lc1->GetValueAtEnd();
			}
			else
			{
				num = lc1->GetValueAtEnd();
			}
			if (num == 1)
			{
				miListT1->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc1->ExtractAtStart();
					dataGridView2->Rows[xc1]->Cells[0]->Style->BackColor = Color::Green;
					xc1++;
				}
				else
				{
					lc1->ExtractAtEnd();
					dataGridView2->Rows[x1]->Cells[0]->Style->BackColor = Color::Green;
					x1--;
				}
				
			}
			else if (num == 2)
			{
				miListT2->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc1->ExtractAtStart();
					dataGridView2->Rows[xc2]->Cells[1]->Style->BackColor = Color::Green;
					xc2++;
				}
				else
				{
					lc1->ExtractAtEnd();
					dataGridView2->Rows[x2]->Cells[1]->Style->BackColor = Color::Red;
					x2--;
				}
				
			}
			else if (num == 3)
			{
				miListT3->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc1->ExtractAtStart();
					dataGridView2->Rows[xc3]->Cells[2]->Style->BackColor = Color::Green;
					xc3++;
				}
				else
				{
					lc1->ExtractAtEnd();
					dataGridView2->Rows[x3]->Cells[2]->Style->BackColor = Color::Yellow;
					x3--;
				}
				
			}
			else if (num == 4)
			{
				miListT4->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc1->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[3]->Style->BackColor = Color::Green;
					xc4++;
				}
				else
				{
					lc1->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[3]->Style->BackColor = Color::Purple;
					x4--;
				}
				
			}
			else if (num == 5)
			{
				miListT5->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc1->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[4]->Style->BackColor = Color::Green;
					xc5++;
				}
				else
				{
					lc1->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[4]->Style->BackColor = Color::Black;
					x5--;
				}

			}
			else if (num == 6)
			{
				miListT6->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc1->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[5]->Style->BackColor = Color::Green;
					xc6++;
				}
				else
				{
					lc1->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[5]->Style->BackColor = Color::Blue;
					x6--;
				}

			}
			else if (num == 7)
			{
			miListT7->InsertAtStart(num);
			if (choosemode == 2)
			{
				lc1->ExtractAtStart();
				dataGridView2->Rows[xc4]->Cells[6]->Style->BackColor = Color::Green;
				xc7++;
			}
			else
			{
				lc1->ExtractAtEnd();
				dataGridView2->Rows[x4]->Cells[6]->Style->BackColor = Color::Gray;
				x7--;
			}

			}
			else if (num == 8)
			{
			miListT8->InsertAtStart(num);
			if (choosemode == 2)
			{
				lc1->ExtractAtStart();
				dataGridView2->Rows[xc4]->Cells[7]->Style->BackColor = Color::Green;
				xc8++;
			}
			else
			{
				lc1->ExtractAtEnd();
				dataGridView2->Rows[x4]->Cells[7]->Style->BackColor = Color::DarkBlue;
				x8--;
			}

			}

		}
		while (lc2->isEmpty() != true)
		{
			if (choosemode == 2)
			{
				num = lc2->GetValueAtEnd();
			}
			else
			{
				num = lc2->GetValueAtEnd();
			}
			if (num == 1)
			{
				miListT1->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc2->ExtractAtStart();
					dataGridView2->Rows[xc1]->Cells[0]->Style->BackColor = Color::Green;
					xc1++;
				}
				else
				{
					lc2->ExtractAtEnd();
					dataGridView2->Rows[x1]->Cells[0]->Style->BackColor = Color::Green;
					x1--;
				}
				
			}
			else if (num == 2)
			{
				miListT2->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc2->ExtractAtStart();
					dataGridView2->Rows[xc2]->Cells[1]->Style->BackColor = Color::Green;
					xc2++;
				}
				else
				{
					lc2->ExtractAtEnd();
					dataGridView2->Rows[x2]->Cells[1]->Style->BackColor = Color::Red;
					x2--;
				}
				
			}
			else if (num == 3)
			{
				miListT3->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc2->ExtractAtStart();
					dataGridView2->Rows[xc3]->Cells[2]->Style->BackColor = Color::Green;
					xc3++;
				}
				else
				{
					lc2->ExtractAtEnd();
					dataGridView2->Rows[x3]->Cells[2]->Style->BackColor = Color::Yellow;
					x3--;
				}
				
			}
			else if (num == 4)
			{
				lc4->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc2->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[3]->Style->BackColor = Color::Green;
					xc4++;
				}
				else
				{
					lc2->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[3]->Style->BackColor = Color::Purple;
					x4--;
				}
				
			}
			else if (num == 5)
			{
				miListT5->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc2->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[4]->Style->BackColor = Color::Green;
					xc5++;
				}
				else
				{
					lc2->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[4]->Style->BackColor = Color::Black;
					x5--;
				}

			}
			else if (num == 6)
			{
				miListT6->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc2->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[5]->Style->BackColor = Color::Green;
					xc6++;
				}
				else
				{
					lc2->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[5]->Style->BackColor = Color::Blue;
					x6--;
				}

			}
			else if (num == 7)
			{
				miListT7->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc2->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[6]->Style->BackColor = Color::Green;
					xc7++;
				}
				else
				{
					lc2->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[6]->Style->BackColor = Color::Gray;
					x7--;
				}

			}
			else if (num == 8)
			{
				miListT8->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc2->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[7]->Style->BackColor = Color::Green;
					xc8++;
				}
				else
				{
					lc2->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[7]->Style->BackColor = Color::DarkBlue;
					x8--;
				}

			}
		}
		while (lc3->isEmpty() != true)
		{
			if (choosemode == 2)
			{
				num = lc3->GetValueAtEnd();
			}
			else
			{
				num = lc3->GetValueAtEnd();
			}
			if (num == 1)
			{
				miListT1->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc3->ExtractAtStart();
					dataGridView2->Rows[xc1]->Cells[0]->Style->BackColor = Color::Green;
					xc1++;
				}
				else
				{
					lc3->ExtractAtEnd();
					dataGridView2->Rows[x1]->Cells[0]->Style->BackColor = Color::Green;
					x1--;
				}
				
			}
			else if (num == 2)
			{
				miListT2->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc3->ExtractAtStart();
					dataGridView2->Rows[xc2]->Cells[1]->Style->BackColor = Color::Green;
					xc2++;
				}
				else
				{
					lc3->ExtractAtEnd();
					dataGridView2->Rows[x2]->Cells[1]->Style->BackColor = Color::Red;
					x2--;
				}
				
			}
			else if (num == 3)
			{
				miListT3->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc3->ExtractAtStart();
					dataGridView2->Rows[xc3]->Cells[2]->Style->BackColor = Color::Green;
					xc3++;
				}
				else
				{
					lc3->ExtractAtEnd();
					dataGridView2->Rows[x3]->Cells[2]->Style->BackColor = Color::Yellow;
					x3--;
				}
				
			}
			else if (num == 4)
			{
				lc4->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc3->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[3]->Style->BackColor = Color::Green;
					xc4++;
				}
				else
				{
					lc3->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[3]->Style->BackColor = Color::Purple;
					x4--;
				}
				
			}
			else if (num == 5)
			{
				miListT5->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc3->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[4]->Style->BackColor = Color::Green;
					xc5++;
				}
				else
				{
					lc3->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[4]->Style->BackColor = Color::Black;
					x5--;
				}

			}
			else if (num == 6)
			{
				miListT6->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc3->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[5]->Style->BackColor = Color::Green;
					xc6++;
				}
				else
				{
					lc3->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[5]->Style->BackColor = Color::Blue;
					x6--;
				}

			}
			else if (num == 7)
			{
			miListT7->InsertAtStart(num);
			if (choosemode == 2)
			{
				lc3->ExtractAtStart();
				dataGridView2->Rows[xc4]->Cells[6]->Style->BackColor = Color::Green;
				xc7++;
			}
			else
			{
				lc3->ExtractAtEnd();
				dataGridView2->Rows[x4]->Cells[6]->Style->BackColor = Color::Gray;
				x7--;
			}

			}
			else if (num == 8)
			{
			miListT8->InsertAtStart(num);
			if (choosemode == 2)
			{
				lc3->ExtractAtStart();
				dataGridView2->Rows[xc4]->Cells[7]->Style->BackColor = Color::Green;
				xc8++;
			}
			else
			{
				lc3->ExtractAtEnd();
				dataGridView2->Rows[x4]->Cells[7]->Style->BackColor = Color::DarkBlue;
				x8--;
			}

			}
		}
		while (lc4->isEmpty() != true)
		{
			if (choosemode == 2)
			{
				num = lc4->GetValueAtEnd();
			}
			else
			{
				num = lc4->GetValueAtEnd();
			}
			if (num == 1)
			{
				miListT1->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc4->ExtractAtStart();
					dataGridView2->Rows[xc1]->Cells[0]->Style->BackColor = Color::Green;
					xc1++;
				}
				else
				{
					lc4->ExtractAtEnd();
					dataGridView2->Rows[x1]->Cells[0]->Style->BackColor = Color::Green;
					x1--;
				}
				
			}
			else if (num == 2)
			{
				miListT2->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc4->ExtractAtStart();
					dataGridView2->Rows[xc2]->Cells[1]->Style->BackColor = Color::Green;
					xc2++;
				}
				else
				{
					lc4->ExtractAtEnd();
					dataGridView2->Rows[x2]->Cells[1]->Style->BackColor = Color::Red;
					x2--;
				}
				
			}
			else if (num == 3)
			{
				miListT3->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc4->ExtractAtStart();
					dataGridView2->Rows[xc3]->Cells[2]->Style->BackColor = Color::Green;
					xc3++;
				}
				else
				{
					lc4->ExtractAtEnd();
					dataGridView2->Rows[x3]->Cells[2]->Style->BackColor = Color::Yellow;
					x3--;
				}
				
			}
			else if (num == 4)
			{
				lc4->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc4->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[3]->Style->BackColor = Color::Green;
					xc4++;
				}
				else
				{
					lc4->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[3]->Style->BackColor = Color::Purple;
					x4--;
				}
				
			}
			else if (num == 5)
			{
				miListT5->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc4->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[4]->Style->BackColor = Color::Green;
					xc5++;
				}
				else
				{
					lc4->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[4]->Style->BackColor = Color::Black;
					x5--;
				}

			}
			else if (num == 6)
			{
				miListT6->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc4->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[5]->Style->BackColor = Color::Green;
					xc6++;
				}
				else
				{
					lc4->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[5]->Style->BackColor = Color::Blue;
					x6--;
				}

			}
			else if (num == 7)
			{
				miListT7->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc4->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[6]->Style->BackColor = Color::Green;
					xc7++;
				}
				else
				{
					lc4->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[6]->Style->BackColor = Color::Gray;
					x7--;
				}

			}
			else if (num == 8)
			{
				miListT8->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc4->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[7]->Style->BackColor = Color::Green;
					xc8++;
				}
				else
				{
					lc4->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[7]->Style->BackColor = Color::DarkBlue;
					x8--;
				}

			}
		}
		while (lc5->isEmpty() != true)
		{
			if (choosemode == 2)
			{
				num = lc5->GetValueAtEnd();
			}
			else
			{
				num = lc5->GetValueAtEnd();
			}
			if (num == 1)
			{
				miListT1->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc5->ExtractAtStart();
					dataGridView2->Rows[xc1]->Cells[0]->Style->BackColor = Color::Green;
					xc1++;
				}
				else
				{
					lc5->ExtractAtEnd();
					dataGridView2->Rows[x1]->Cells[0]->Style->BackColor = Color::Green;
					x1--;
				}

			}
			else if (num == 2)
			{
				miListT2->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc5->ExtractAtStart();
					dataGridView2->Rows[xc2]->Cells[1]->Style->BackColor = Color::Green;
					xc2++;
				}
				else
				{
					lc5->ExtractAtEnd();
					dataGridView2->Rows[x2]->Cells[1]->Style->BackColor = Color::Red;
					x2--;
				}

			}
			else if (num == 3)
			{
				miListT3->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc5->ExtractAtStart();
					dataGridView2->Rows[xc3]->Cells[2]->Style->BackColor = Color::Green;
					xc3++;
				}
				else
				{
					lc5->ExtractAtEnd();
					dataGridView2->Rows[x3]->Cells[2]->Style->BackColor = Color::Yellow;
					x3--;
				}

			}
			else if (num == 4)
			{
				lc4->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc5->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[3]->Style->BackColor = Color::Green;
					xc4++;
				}
				else
				{
					lc5->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[3]->Style->BackColor = Color::Purple;
					x4--;
				}

			}
			else if (num == 5)
			{
				miListT5->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc5->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[4]->Style->BackColor = Color::Green;
					xc5++;
				}
				else
				{
					lc5->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[4]->Style->BackColor = Color::Black;
					x5--;
				}

			}
			else if (num == 6)
			{
				miListT6->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc5->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[5]->Style->BackColor = Color::Green;
					xc6++;
				}
				else
				{
					lc5->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[5]->Style->BackColor = Color::Blue;
					x6--;
				}

			}
			else if (num == 7)
			{
				miListT7->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc5->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[6]->Style->BackColor = Color::Green;
					xc7++;
				}
				else
				{
					lc5->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[6]->Style->BackColor = Color::Gray;
					x7--;
				}

			}
			else if (num == 8)
			{
				miListT8->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc5->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[7]->Style->BackColor = Color::Green;
					xc8++;
				}
				else
				{
					lc5->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[7]->Style->BackColor = Color::DarkBlue;
					x8--;
				}

			}
		}
		while (lc6->isEmpty() != true)
		{
			if (choosemode == 2)
			{
				num = lc6->GetValueAtEnd();
			}
			else
			{
				num = lc6->GetValueAtEnd();
			}
			if (num == 1)
			{
				miListT1->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc6->ExtractAtStart();
					dataGridView2->Rows[xc1]->Cells[0]->Style->BackColor = Color::Green;
					xc1++;
				}
				else
				{
					lc6->ExtractAtEnd();
					dataGridView2->Rows[x1]->Cells[0]->Style->BackColor = Color::Green;
					x1--;
				}

			}
			else if (num == 2)
			{
				miListT2->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc6->ExtractAtStart();
					dataGridView2->Rows[xc2]->Cells[1]->Style->BackColor = Color::Green;
					xc2++;
				}
				else
				{
					lc6->ExtractAtEnd();
					dataGridView2->Rows[x2]->Cells[1]->Style->BackColor = Color::Red;
					x2--;
				}

			}
			else if (num == 3)
			{
				miListT3->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc6->ExtractAtStart();
					dataGridView2->Rows[xc3]->Cells[2]->Style->BackColor = Color::Green;
					xc3++;
				}
				else
				{
					lc6->ExtractAtEnd();
					dataGridView2->Rows[x3]->Cells[2]->Style->BackColor = Color::Yellow;
					x3--;
				}

			}
			else if (num == 4)
			{
				lc4->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc6->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[3]->Style->BackColor = Color::Green;
					xc4++;
				}
				else
				{
					lc6->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[3]->Style->BackColor = Color::Purple;
					x4--;
				}

			}
			else if (num == 5)
			{
				miListT5->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc6->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[4]->Style->BackColor = Color::Green;
					xc5++;
				}
				else
				{
					lc6->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[4]->Style->BackColor = Color::Black;
					x5--;
				}

			}
			else if (num == 6)
			{
				miListT6->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc6->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[5]->Style->BackColor = Color::Green;
					xc6++;
				}
				else
				{
					lc6->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[5]->Style->BackColor = Color::Blue;
					x6--;
				}

			}
			else if (num == 7)
			{
				miListT7->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc6->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[6]->Style->BackColor = Color::Green;
					xc7++;
				}
				else
				{
					lc6->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[6]->Style->BackColor = Color::Gray;
					x7--;
				}

			}
			else if (num == 8)
			{
				miListT8->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc6->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[7]->Style->BackColor = Color::Green;
					xc8++;
				}
				else
				{
					lc6->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[7]->Style->BackColor = Color::DarkBlue;
					x8--;
				}

			}
		}
		while (lc7->isEmpty() != true)
		{
			if (choosemode == 2)
			{
				num = lc7->GetValueAtEnd();
			}
			else
			{
				num = lc7->GetValueAtEnd();
			}
			if (num == 1)
			{
				miListT1->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc7->ExtractAtStart();
					dataGridView2->Rows[xc1]->Cells[0]->Style->BackColor = Color::Green;
					xc1++;
				}
				else
				{
					lc7->ExtractAtEnd();
					dataGridView2->Rows[x1]->Cells[0]->Style->BackColor = Color::Green;
					x1--;
				}

			}
			else if (num == 2)
			{
				miListT2->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc7->ExtractAtStart();
					dataGridView2->Rows[xc2]->Cells[1]->Style->BackColor = Color::Green;
					xc2++;
				}
				else
				{
					lc7->ExtractAtEnd();
					dataGridView2->Rows[x2]->Cells[1]->Style->BackColor = Color::Red;
					x2--;
				}

			}
			else if (num == 3)
			{
				miListT3->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc7->ExtractAtStart();
					dataGridView2->Rows[xc3]->Cells[2]->Style->BackColor = Color::Green;
					xc3++;
				}
				else
				{
					lc7->ExtractAtEnd();
					dataGridView2->Rows[x3]->Cells[2]->Style->BackColor = Color::Yellow;
					x3--;
				}

			}
			else if (num == 4)
			{
				lc4->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc7->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[3]->Style->BackColor = Color::Green;
					xc4++;
				}
				else
				{
					lc7->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[3]->Style->BackColor = Color::Purple;
					x4--;
				}

			}
			else if (num == 5)
			{
				miListT5->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc7->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[4]->Style->BackColor = Color::Green;
					xc5++;
				}
				else
				{
					lc7->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[4]->Style->BackColor = Color::Black;
					x5--;
				}

			}
			else if (num == 6)
			{
				miListT6->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc7->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[5]->Style->BackColor = Color::Green;
					xc6++;
				}
				else
				{
					lc7->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[5]->Style->BackColor = Color::Blue;
					x6--;
				}

			}
			else if (num == 7)
			{
				miListT7->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc7->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[6]->Style->BackColor = Color::Green;
					xc7++;
				}
				else
				{
					lc7->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[6]->Style->BackColor = Color::Gray;
					x7--;
				}

			}
			else if (num == 8)
			{
				miListT8->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc7->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[7]->Style->BackColor = Color::Green;
					xc8++;
				}
				else
				{
					lc7->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[7]->Style->BackColor = Color::DarkBlue;
					x8--;
				}

			}
		}
		while (lc8->isEmpty() != true)
		{
			if (choosemode == 2)
			{
				num = lc8->GetValueAtEnd();
			}
			else
			{
				num = lc8->GetValueAtEnd();
			}
			if (num == 1)
			{
				miListT1->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc8->ExtractAtStart();
					dataGridView2->Rows[xc1]->Cells[0]->Style->BackColor = Color::Green;
					xc1++;
				}
				else
				{
					lc8->ExtractAtEnd();
					dataGridView2->Rows[x1]->Cells[0]->Style->BackColor = Color::Green;
					x1--;
				}

			}
			else if (num == 2)
			{
				miListT2->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc8->ExtractAtStart();
					dataGridView2->Rows[xc2]->Cells[1]->Style->BackColor = Color::Green;
					xc2++;
				}
				else
				{
					lc8->ExtractAtEnd();
					dataGridView2->Rows[x2]->Cells[1]->Style->BackColor = Color::Red;
					x2--;
				}

			}
			else if (num == 3)
			{
				miListT3->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc8->ExtractAtStart();
					dataGridView2->Rows[xc3]->Cells[2]->Style->BackColor = Color::Green;
					xc3++;
				}
				else
				{
					lc8->ExtractAtEnd();
					dataGridView2->Rows[x3]->Cells[2]->Style->BackColor = Color::Yellow;
					x3--;
				}

			}
			else if (num == 4)
			{
				lc4->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc8->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[3]->Style->BackColor = Color::Green;
					xc4++;
				}
				else
				{
					lc8->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[3]->Style->BackColor = Color::Purple;
					x4--;
				}

			}
			else if (num == 5)
			{
				miListT5->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc8->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[4]->Style->BackColor = Color::Green;
					xc5++;
				}
				else
				{
					lc8->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[4]->Style->BackColor = Color::Black;
					x5--;
				}

			}
			else if (num == 6)
			{
				miListT6->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc8->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[5]->Style->BackColor = Color::Green;
					xc6++;
				}
				else
				{
					lc8->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[5]->Style->BackColor = Color::Blue;
					x6--;
				}

			}
			else if (num == 7)
			{
				miListT7->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc8->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[6]->Style->BackColor = Color::Green;
					xc7++;
				}
				else
				{
					lc8->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[6]->Style->BackColor = Color::Gray;
					x7--;
				}

			}
			else if (num == 8)
			{
				miListT8->InsertAtStart(num);
				if (choosemode == 2)
				{
					lc8->ExtractAtStart();
					dataGridView2->Rows[xc4]->Cells[7]->Style->BackColor = Color::Green;
					xc8++;
				}
				else
				{
					lc8->ExtractAtEnd();
					dataGridView2->Rows[x4]->Cells[7]->Style->BackColor = Color::DarkBlue;
					x8--;
				}

			}
		}
	}

};
}
