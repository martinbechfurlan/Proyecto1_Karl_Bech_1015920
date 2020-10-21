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
	/// Resumen de juego
	/// </summary>
	public ref class juego : public System::Windows::Forms::Form
	{
	public:
		Lista* lc1;
		Lista* lc2;
		Lista* lc3;
		Lista* lc4;
		Lista* lc5;
		Lista* lc6;
		Lista* lc7;
		Lista* lc8;
		
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

	private: System::Windows::Forms::Label^ lbl_Modo;
	private: System::Windows::Forms::Label^ mode_lbl;

	private: System::Windows::Forms::Label^ lbl_Ordenamiento;
	private: System::Windows::Forms::Label^ orden_lbl;

	private: System::Windows::Forms::Label^ lbl_Dificultad;
	private: System::Windows::Forms::Label^ dif_lbl;

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









	public:
		static array<String^>^ datos;
		juego(void)
		{
			InitializeComponent();
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

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~juego()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(juego::typeid));
			this->gameboard_dgv = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_Modo = (gcnew System::Windows::Forms::Label());
			this->mode_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl_Ordenamiento = (gcnew System::Windows::Forms::Label());
			this->orden_lbl = (gcnew System::Windows::Forms::Label());
			this->lbl_Dificultad = (gcnew System::Windows::Forms::Label());
			this->dif_lbl = (gcnew System::Windows::Forms::Label());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gameboard_dgv))->BeginInit();
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
			// lbl_Modo
			// 
			this->lbl_Modo->AutoSize = true;
			this->lbl_Modo->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Modo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Modo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Modo->Location = System::Drawing::Point(8, 8);
			this->lbl_Modo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Modo->Name = L"lbl_Modo";
			this->lbl_Modo->Size = System::Drawing::Size(147, 24);
			this->lbl_Modo->TabIndex = 14;
			this->lbl_Modo->Text = L"Tipo de juego:";
			// 
			// mode_lbl
			// 
			this->mode_lbl->AutoSize = true;
			this->mode_lbl->BackColor = System::Drawing::Color::Transparent;
			this->mode_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mode_lbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->mode_lbl->Location = System::Drawing::Point(37, 43);
			this->mode_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->mode_lbl->Name = L"mode_lbl";
			this->mode_lbl->Size = System::Drawing::Size(0, 24);
			this->mode_lbl->TabIndex = 15;
			// 
			// lbl_Ordenamiento
			// 
			this->lbl_Ordenamiento->AutoSize = true;
			this->lbl_Ordenamiento->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Ordenamiento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Ordenamiento->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Ordenamiento->Location = System::Drawing::Point(8, 90);
			this->lbl_Ordenamiento->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Ordenamiento->Name = L"lbl_Ordenamiento";
			this->lbl_Ordenamiento->Size = System::Drawing::Size(69, 24);
			this->lbl_Ordenamiento->TabIndex = 16;
			this->lbl_Ordenamiento->Text = L"Modo:";
			this->lbl_Ordenamiento->Visible = false;
			// 
			// orden_lbl
			// 
			this->orden_lbl->AutoSize = true;
			this->orden_lbl->BackColor = System::Drawing::Color::Transparent;
			this->orden_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->orden_lbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->orden_lbl->Location = System::Drawing::Point(83, 114);
			this->orden_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->orden_lbl->Name = L"orden_lbl";
			this->orden_lbl->Size = System::Drawing::Size(0, 24);
			this->orden_lbl->TabIndex = 17;
			this->orden_lbl->Visible = false;
			// 
			// lbl_Dificultad
			// 
			this->lbl_Dificultad->AutoSize = true;
			this->lbl_Dificultad->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Dificultad->Font = (gcnew System::Drawing::Font(L"RazerF5", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Dificultad->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Dificultad->Location = System::Drawing::Point(8, 161);
			this->lbl_Dificultad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Dificultad->Name = L"lbl_Dificultad";
			this->lbl_Dificultad->Size = System::Drawing::Size(95, 23);
			this->lbl_Dificultad->TabIndex = 18;
			this->lbl_Dificultad->Text = L"Dificultad:";
			// 
			// dif_lbl
			// 
			this->dif_lbl->AutoSize = true;
			this->dif_lbl->BackColor = System::Drawing::Color::Transparent;
			this->dif_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dif_lbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dif_lbl->Location = System::Drawing::Point(83, 190);
			this->dif_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->dif_lbl->Name = L"dif_lbl";
			this->dif_lbl->Size = System::Drawing::Size(0, 24);
			this->dif_lbl->TabIndex = 19;
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
			// 
			// modo_btn
			// 
			this->modo_btn->Location = System::Drawing::Point(87, 251);
			this->modo_btn->Name = L"modo_btn";
			this->modo_btn->Size = System::Drawing::Size(99, 23);
			this->modo_btn->TabIndex = 24;
			this->modo_btn->Text = L"Cambiar modo";
			this->modo_btn->UseVisualStyleBackColor = true;
			this->modo_btn->Click += gcnew System::EventHandler(this, &juego::modo_btn_Click);
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
			this->origen_btn->Click += gcnew System::EventHandler(this, &juego::origen_btn_Click);
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
			this->destino_btn->Click += gcnew System::EventHandler(this, &juego::destino_btn_Click);
			// 
			// victoria_btn
			// 
			this->victoria_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->victoria_btn->Location = System::Drawing::Point(80, 397);
			this->victoria_btn->Name = L"victoria_btn";
			this->victoria_btn->Size = System::Drawing::Size(129, 23);
			this->victoria_btn->TabIndex = 29;
			this->victoria_btn->Text = L"Comprobar Victoria";
			this->victoria_btn->UseVisualStyleBackColor = false;
			this->victoria_btn->Click += gcnew System::EventHandler(this, &juego::victoria_btn_Click);
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
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &juego::saveFileDialog1_FileOk);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(759, 312);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 38);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Exportar pasos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &juego::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(759, 31);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Save file";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &juego::button2_Click);
			// 
			// juego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(884, 453);
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
			this->Controls->Add(this->dif_lbl);
			this->Controls->Add(this->lbl_Dificultad);
			this->Controls->Add(this->orden_lbl);
			this->Controls->Add(this->lbl_Ordenamiento);
			this->Controls->Add(this->mode_lbl);
			this->Controls->Add(this->lbl_Modo);
			this->Controls->Add(this->gameboard_dgv);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"juego";
			this->Text = L"juego";
			this->Load += gcnew System::EventHandler(this, &juego::juego_load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gameboard_dgv))->EndInit();
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
				dif_lbl->Text = "Fácil";
				permove_lbl->Text = "Sin límite";
			}
			else if (dif == 2) {
				difmoves = 50;
				dif_lbl->Text = "Medio";
				permove_lbl->Text = "" + difmoves;
			}
			else if (dif == 3) {
				difmoves = 25;
				dif_lbl->Text = "Difícil";
				permove_lbl->Text = "" + difmoves;
			}
		}


		void colorear() {
			int x = 0, c1 = tamañopilas - 1, c2 = tamañopilas - 1, c3 = tamañopilas - 1, c4 = tamañopilas - 1, c5 = tamañopilas - 1, c6 = tamañopilas - 1, c7 = tamañopilas - 1, c8 = tamañopilas - 1;
			String^ l;

			for (size_t i = 0; i < datos->Length; i++) {
				l = datos[i];
				if (l == "B") {
					if (x == 0) {
						lc1->InsertAtEnd(1);
						gameboard_dgv->Rows[c1]->Cells[0]->Style->BackColor = Color::Black;
						c1--;

					}
					else if (x == 1) {
						lc2->InsertAtEnd(1);
						gameboard_dgv->Rows[c2]->Cells[1]->Style->BackColor = Color::Black;
						c2--;
					}
					else if (x == 2) {
						lc3->InsertAtEnd(1);
						gameboard_dgv->Rows[c3]->Cells[2]->Style->BackColor = Color::Black;
						c3--;
					}
					else if (x == 3) {
						lc4->InsertAtEnd(1);
						gameboard_dgv->Rows[c4]->Cells[3]->Style->BackColor = Color::Black;
						c4--;
					}
					else if (x == 4) {
						lc5->InsertAtEnd(1);
						gameboard_dgv->Rows[c5]->Cells[4]->Style->BackColor = Color::Black;
						c5--;
					}
					else if (x == 5) {
						lc6->InsertAtEnd(1);
						gameboard_dgv->Rows[c6]->Cells[5]->Style->BackColor = Color::Black;
						c6--;
					}
					else if (x == 6) {
						lc7->InsertAtEnd(1);
						gameboard_dgv->Rows[c7]->Cells[6]->Style->BackColor = Color::Black;
						c7--;
					}
					else if (x == 7) {
						lc8->InsertAtEnd(1);
						gameboard_dgv->Rows[c8]->Cells[7]->Style->BackColor = Color::Black;
						c8--;
					}
				}
				else if (l == "Z") {
					if (x == 0) {
						lc1->InsertAtEnd(2);
						gameboard_dgv->Rows[c1]->Cells[0]->Style->BackColor = Color::Blue;
						c1--;
					}
					else if (x == 1) {
						lc2->InsertAtEnd(2);
						gameboard_dgv->Rows[c2]->Cells[1]->Style->BackColor = Color::Blue;
						c2--;
					}
					else if (x == 2) {
						lc3->InsertAtEnd(2);
						gameboard_dgv->Rows[c3]->Cells[2]->Style->BackColor = Color::Blue;
						c3--;
					}
					else if (x == 3) {
						lc4->InsertAtEnd(2);
						gameboard_dgv->Rows[c4]->Cells[3]->Style->BackColor = Color::Blue;
						c4--;
					}
					else if (x == 4) {
						lc5->InsertAtEnd(2);
						gameboard_dgv->Rows[c5]->Cells[4]->Style->BackColor = Color::Blue;
						c5--;
					}
					else if (x == 5) {
						lc6->InsertAtEnd(2);
						gameboard_dgv->Rows[c6]->Cells[5]->Style->BackColor = Color::Blue;
						c6--;
					}
					else if (x == 6) {
						lc7->InsertAtEnd(2);
						gameboard_dgv->Rows[c7]->Cells[6]->Style->BackColor = Color::Blue;
						c7--;
					}
					else if (x == 7) {
						lc8->InsertAtEnd(2);
						gameboard_dgv->Rows[c8]->Cells[7]->Style->BackColor = Color::Blue;
						c8--;
					}
				}
				else if (l == "W") {
					if (x == 0) {
						lc1->InsertAtEnd(3);
						gameboard_dgv->Rows[c1]->Cells[0]->Style->BackColor = Color::Gray;
						c1--;
					}
					else if (x == 1) {
						lc2->InsertAtEnd(3);
						gameboard_dgv->Rows[c2]->Cells[1]->Style->BackColor = Color::Gray;
						c2--;
					}
					else if (x == 2) {
						lc3->InsertAtEnd(3);
						gameboard_dgv->Rows[c3]->Cells[2]->Style->BackColor = Color::Gray;
						c3--;
					}
					else if (x == 3) {
						lc4->InsertAtEnd(3);
						gameboard_dgv->Rows[c4]->Cells[3]->Style->BackColor = Color::Gray;
						c4--;
					}
					else if (x == 4) {
						lc5->InsertAtEnd(3);
						gameboard_dgv->Rows[c5]->Cells[4]->Style->BackColor = Color::Gray;
						c5--;
					}
					else if (x == 5) {
						lc6->InsertAtEnd(3);
						gameboard_dgv->Rows[c6]->Cells[5]->Style->BackColor = Color::Gray;
						c6--;
					}
					else if (x == 6) {
						lc7->InsertAtEnd(3);
						gameboard_dgv->Rows[c7]->Cells[6]->Style->BackColor = Color::Gray;
						c7--;
					}
					else if (x == 7) {
						lc8->InsertAtEnd(3);
						gameboard_dgv->Rows[c8]->Cells[7]->Style->BackColor = Color::Gray;
						c8--;
					}
				}
				else if (l == "R") {
					if (x == 0) {
						lc1->InsertAtEnd(4);
						gameboard_dgv->Rows[c1]->Cells[0]->Style->BackColor = Color::Red;
						c1--;
					}
					else if (x == 1) {
						lc2->InsertAtEnd(4);
						gameboard_dgv->Rows[c2]->Cells[1]->Style->BackColor = Color::Red;
						c2--;
					}
					else if (x == 2) {
						lc3->InsertAtEnd(4);
						gameboard_dgv->Rows[c3]->Cells[2]->Style->BackColor = Color::Red;
						c3--;
					}
					else if (x == 3) {
						lc4->InsertAtEnd(4);
						gameboard_dgv->Rows[c4]->Cells[3]->Style->BackColor = Color::Red;
						c4--;
					}
					else if (x == 4) {
						lc5->InsertAtEnd(4);
						gameboard_dgv->Rows[c5]->Cells[4]->Style->BackColor = Color::Red;
						c5--;
					}
					else if (x == 5) {
						lc6->InsertAtEnd(4);
						gameboard_dgv->Rows[c6]->Cells[5]->Style->BackColor = Color::Red;
						c6--;
					}
					else if (x == 6) {
						lc7->InsertAtEnd(4);
						gameboard_dgv->Rows[c7]->Cells[6]->Style->BackColor = Color::Red;
						c7--;
					}
					else if (x == 7) {
						lc8->InsertAtEnd(4);
						gameboard_dgv->Rows[c8]->Cells[7]->Style->BackColor = Color::Red;
						c8--;
					}
				}
				else if (l == "Y") {
					if (x == 0) {
						lc1->InsertAtEnd(5);
						gameboard_dgv->Rows[c1]->Cells[0]->Style->BackColor = Color::Yellow;
						c1--;
					}
					else if (x == 1) {
						lc2->InsertAtEnd(5);
						gameboard_dgv->Rows[c2]->Cells[1]->Style->BackColor = Color::Yellow;
						c2--;
					}
					else if (x == 2) {
						lc3->InsertAtEnd(5);
						gameboard_dgv->Rows[c3]->Cells[2]->Style->BackColor = Color::Yellow;
						c3--;
					}
					else if (x == 3) {
						lc4->InsertAtEnd(5);
						gameboard_dgv->Rows[c4]->Cells[3]->Style->BackColor = Color::Yellow;
						c4--;
					}
					else if (x == 4) {
						lc5->InsertAtEnd(5);
						gameboard_dgv->Rows[c5]->Cells[4]->Style->BackColor = Color::Yellow;
						c5--;
					}
					else if (x == 5) {
						lc6->InsertAtEnd(5);
						gameboard_dgv->Rows[c6]->Cells[5]->Style->BackColor = Color::Yellow;
						c6--;
					}
					else if (x == 6) {
						lc7->InsertAtEnd(5);
						gameboard_dgv->Rows[c7]->Cells[6]->Style->BackColor = Color::Yellow;
						c7--;
					}
					else if (x == 7) {
						lc8->InsertAtEnd(5);
						gameboard_dgv->Rows[c8]->Cells[7]->Style->BackColor = Color::Yellow;
						c8--;
					}
				}
				else if (l == "G") {
					if (x == 0) {
						lc1->InsertAtEnd(6);
						gameboard_dgv->Rows[c1]->Cells[0]->Style->BackColor = Color::Green;
						c1--;
					}
					else if (x == 1) {
						lc2->InsertAtEnd(6);
						gameboard_dgv->Rows[c2]->Cells[1]->Style->BackColor = Color::Green;
						c2--;
					}
					else if (x == 2) {
						lc3->InsertAtEnd(6);
						gameboard_dgv->Rows[c3]->Cells[2]->Style->BackColor = Color::Green;
						c3--;
					}
					else if (x == 3) {
						lc4->InsertAtEnd(6);
						gameboard_dgv->Rows[c4]->Cells[3]->Style->BackColor = Color::Green;
						c4--;
					}
					else if (x == 4) {
						lc5->InsertAtEnd(6);
						gameboard_dgv->Rows[c5]->Cells[4]->Style->BackColor = Color::Green;
						c5--;
					}
					else if (x == 5) {
						lc6->InsertAtEnd(6);
						gameboard_dgv->Rows[c6]->Cells[5]->Style->BackColor = Color::Green;
						c6--;
					}
					else if (x == 6) {
						lc7->InsertAtEnd(6);
						gameboard_dgv->Rows[c7]->Cells[6]->Style->BackColor = Color::Green;
						c7--;
					}
					else if (x == 7) {
						lc8->InsertAtEnd(6);
						gameboard_dgv->Rows[c8]->Cells[7]->Style->BackColor = Color::Green;
						c8--;
					}
				}
				else if (l == "P") {
					if (x == 0) {
						lc1->InsertAtEnd(7);
						gameboard_dgv->Rows[c1]->Cells[0]->Style->BackColor = Color::Purple;
						c1--;
					}
					else if (x == 1) {
						lc2->InsertAtEnd(7);
						gameboard_dgv->Rows[c2]->Cells[1]->Style->BackColor = Color::Purple;
						c2--;
					}
					else if (x == 2) {
						lc3->InsertAtEnd(7);
						gameboard_dgv->Rows[c3]->Cells[2]->Style->BackColor = Color::Purple;
						c3--;
					}
					else if (x == 3) {
						lc4->InsertAtEnd(7);
						gameboard_dgv->Rows[c4]->Cells[3]->Style->BackColor = Color::Purple;
						c4--;
					}
					else if (x == 4) {
						lc5->InsertAtEnd(7);
						gameboard_dgv->Rows[c5]->Cells[4]->Style->BackColor = Color::Purple;
						c5--;
					}
					else if (x == 5) {
						lc6->InsertAtEnd(7);
						gameboard_dgv->Rows[c6]->Cells[5]->Style->BackColor = Color::Purple;
						c6--;
					}
					else if (x == 6) {
						lc7->InsertAtEnd(7);
						gameboard_dgv->Rows[c7]->Cells[6]->Style->BackColor = Color::Purple;
						c7--;
					}
					else if (x == 7) {
						lc8->InsertAtEnd(7);
						gameboard_dgv->Rows[c8]->Cells[7]->Style->BackColor = Color::Purple;
						c8--;
					}
				}
				else if (l == "N") {
					if (x == 0) {
						lc1->InsertAtEnd(8);
						gameboard_dgv->Rows[c1]->Cells[0]->Style->BackColor = Color::DarkBlue;
						c1--;
					}
					else if (x == 1) {
						lc2->InsertAtEnd(8);
						gameboard_dgv->Rows[c2]->Cells[1]->Style->BackColor = Color::DarkBlue;
						c2--;
					}
					else if (x == 2) {
						lc3->InsertAtEnd(8);
						gameboard_dgv->Rows[c3]->Cells[2]->Style->BackColor = Color::DarkBlue;
						c3--;
					}
					else if (x == 3) {
						lc4->InsertAtEnd(8);
						gameboard_dgv->Rows[c4]->Cells[3]->Style->BackColor = Color::DarkBlue;
						c4--;
					}
					else if (x == 4) {
						lc5->InsertAtEnd(8);
						gameboard_dgv->Rows[c5]->Cells[4]->Style->BackColor = Color::DarkBlue;
						c5--;
					}
					else if (x == 5) {
						lc6->InsertAtEnd(8);
						gameboard_dgv->Rows[c6]->Cells[5]->Style->BackColor = Color::DarkBlue;
						c6--;
					}
					else if (x == 6) {
						lc7->InsertAtEnd(8);
						gameboard_dgv->Rows[c7]->Cells[6]->Style->BackColor = Color::DarkBlue;
						c7--;
					}
					else if (x == 7) {
						lc8->InsertAtEnd(8);
						gameboard_dgv->Rows[c8]->Cells[7]->Style->BackColor = Color::DarkBlue;
						c8--;
					}
				}
				else if (l == "X" || l == "x") {
					x++;
				}
			}
		}
		
	private: System::Void juego_load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < p1; i++) {

			DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
			nuevacolumna->Width = 45;


			DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
			nuevacolumna->CellTemplate = cellTemplate;


			gameboard_dgv->Columns->Add(nuevacolumna);
		}
		for (int i = 0; i < tamañopilas; i++) {
			gameboard_dgv->Rows->Add();
		}
		colorear();
		if (mpila == true) {
			modo_cb->Visible = true;
			mode_lbl->Text = "Juego con pausas";
			ordenamiento(choosemode);
			for (int i = 0; i < p1; i++) {
				origen_cb->Items->Add("Lista " + (i + 1));
				destino_cb->Items->Add("Lista " + (i + 1));
			}
		}
		else {
			mode_lbl->Text = "Juego sin pausas";
			ordenamiento(choosemode);
		}
	}
		   void ordenamiento(int numero) {
			   if (numero == 1) {
				   lbl_Ordenamiento->Visible = true;
				   orden_lbl->Visible = true;
				   orden_lbl->Text = "Pila";
				   dificultad(difp);
			   }
			   else if (numero == 2) {
				   lbl_Ordenamiento->Visible = true;
				   orden_lbl->Visible = true;
				   orden_lbl->Text = "Cola";
				   dificultad(difp);
			   }
			   else {
				   lbl_Ordenamiento->Visible = false;
				   orden_lbl->Visible = false;
				   dificultad(difp);
			   }
		   }
		   
		   void colordgv() {
			   for (int i = 0; i < p1; i++) {
				   int x = tamañopilas - 1;
				   int y = 0;
				   int z = 0;
				   if (i == 0) {
					   z1 = lc1->Total();
					   for (int t1 = (tamañopilas - 1); t1 >= 0; t1--) {
						   if (z1 > t1)
						   {
							   colordgvp(lc1->GetValue(y), i, x);
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
							   colordgvp(lc2->GetValue(y), i, x);
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
							   colordgvp(lc3->GetValue(y), i, x);
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
							   colordgvp(lc4->GetValue(y), i, x);
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
							   colordgvp(lc5->GetValue(y), i, x);
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
							   colordgvp(lc6->GetValue(y), i, x);
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
							   colordgvp(lc7->GetValue(y), i, x);
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
							   colordgvp(lc8->GetValue(y), i, x);
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
			   stepss();
		   }

	private: void restart() {
		gameboard_dgv->Rows->Clear();
		gameboard_dgv->Columns->Clear();
		gameboard_dgv->ColumnHeadersVisible = false;
		gameboard_dgv->RowHeadersVisible = false;
	}
		   void colordgvp(int nn, int columna, int fila) {
			   if (nn == 1) {
				   gameboard_dgv->Rows[fila]->Cells[columna]->Style->BackColor = Color::Black;
			   }
			   else if (nn == 2) {
				   gameboard_dgv->Rows[fila]->Cells[columna]->Style->BackColor = Color::Blue;
			   }
			   else if (nn == 3) {
				   gameboard_dgv->Rows[fila]->Cells[columna]->Style->BackColor = Color::Gray;
			   }
			   else if (nn == 4) {
				   gameboard_dgv->Rows[fila]->Cells[columna]->Style->BackColor = Color::Red;
			   }
			   else if (nn == 5) {
				   gameboard_dgv->Rows[fila]->Cells[columna]->Style->BackColor = Color::Yellow;
			   }
			   else if (nn == 6) {
				   gameboard_dgv->Rows[fila]->Cells[columna]->Style->BackColor = Color::Green;
			   }
			   else if (nn == 7) {
				   gameboard_dgv->Rows[fila]->Cells[columna]->Style->BackColor = Color::Purple;
			   }
			   else if (nn == 8) {
				   gameboard_dgv->Rows[fila]->Cells[columna]->Style->BackColor = Color::DarkBlue;
			   }
		   }


		  

		 

		  
	private: System::Void modo_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		modo_cb->Visible = false;
		modo_btn->Visible = false;
		if (modo_cb->SelectedIndex == 0) {
			
			origen_cb->Visible = true;
			choosemode = 1;
			lbl_Ordenamiento->Visible = true;
			orden_lbl->Visible = true;
			orden_lbl->Text = "Pila";
			origen_btn->Visible = true;
		}
		else if (modo_cb->SelectedIndex == 1) {
			origen_cb->Visible = true;
			choosemode = 2;
			lbl_Ordenamiento->Visible = true;
			orden_lbl->Visible = true;
			orden_lbl->Text = "Cola";
			origen_btn->Visible = true;
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
	moves_lbl->Text ="" + movimientos;


	if (valuebox2 == 0) {
		if (lc1->Total() < tamañopilas) {
			lc1->InsertAtEnd(value);
			colordgv();
			
			
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
		if (lc2->z < tamañopilas) {
			lc2->InsertAtEnd(value);
			colordgv();
			
			
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
			colordgv();
			movimientos++;
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
			colordgv();
			
		
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
	else if (valuebox2 == 4) {
		if (lc5->Total() < tamañopilas) {
			lc5->InsertAtEnd(value);
			colordgv();
			
			
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
	else if (valuebox2 == 5) {
		if (lc6->Total() < tamañopilas) {
			lc6->InsertAtEnd(value);
			colordgv();
		
			
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
	else if (valuebox2 == 6) {
		if (lc7->Total() < tamañopilas) {
			lc7->InsertAtEnd(value);
			colordgv();
			
			
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
	else if (valuebox2 == 7) {
		if (lc8->Total() < tamañopilas) {
			lc8->InsertAtEnd(value);
			colordgv();
			
		
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
}
private: System::Void victoria_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (p1 == 2)
	{
		z1 = lc1->Total();
		for (int t1 = 0; t1 < z1; t1++) {
			if (lc1->GetValue(0) == lc1->GetValueAtEnd() && lc1->GetValue(t1) == lc1->GetValueAtEnd()) {
				if (lc2->GetValue(0) == lc2->GetValueAtEnd() && lc2->GetValue(t1) == lc2->GetValueAtEnd()){
					win = true;
					if (win==true)
					{
						MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
						
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
				if (lc2->GetValue(0) == lc2->GetValueAtEnd() && lc2->GetValue(t1) == lc2->GetValueAtEnd()){
					if (lc3->GetValue(0) == lc3->GetValueAtEnd() && lc3->GetValue(t1) == lc3->GetValueAtEnd())
					{
						win = true;
						if (win == true)
						{
							MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
							
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
					if (lc3->GetValue(0) == lc3->GetValueAtEnd() && lc3->GetValue(t1) == lc3->GetValueAtEnd()){
						if (lc4->GetValue(0) == lc4->GetValueAtEnd() && lc4->GetValue(t1) == lc4->GetValueAtEnd())
						{
							win = true;
							if (win == true)
							{
								MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
								
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
						if (lc4->GetValue(0) == lc4->GetValueAtEnd() && lc4->GetValue(t1) == lc4->GetValueAtEnd()){
							if (lc5->GetValue(0) == lc5->GetValueAtEnd() && lc5->GetValue(t1) == lc5->GetValueAtEnd())
							{
								win = true;
								if (win == true)
								{
									MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
									
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
							if (lc5->GetValue(0) == lc5->GetValueAtEnd() && lc5->GetValue(t1) == lc5->GetValueAtEnd()){
								if (lc6->GetValue(0) == lc6->GetValueAtEnd() && lc6->GetValue(t1) == lc6->GetValueAtEnd())
								{
									win = true;
									if (win == true)
									{
										MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
										
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
								if (lc6->GetValue(0) == lc6->GetValueAtEnd() && lc6->GetValue(t1) == lc6->GetValueAtEnd()){
									if (lc6->GetValue(0) == lc7->GetValueAtEnd() && lc7->GetValue(t1) == lc7->GetValueAtEnd())
									{
										win = true;
										if (win == true)
										{
											MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
											
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
									if (lc7->GetValue(0) == lc7->GetValueAtEnd() && lc7->GetValue(t1) == lc7->GetValueAtEnd()){
										if (lc8->GetValue(0) == lc8->GetValueAtEnd() && lc8->GetValue(t1) == lc8->GetValueAtEnd())
										{
											win = true;
											if (win == true)
											{
												MessageBox::Show("GANADOR!", "WINNER!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
												
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







	if (win==false)
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

	   void stepss() {
		   if (choosemode == 1) {
			   step += "Movimiento: En modo: Pila, " + "P(" + (valuebox + 1) + ") a " + "P(" + (valuebox2 + 1) + ")" + "\r\n";
		   }
		   else if (choosemode == 2) {
			   step += "Movimiento: En modo: Cola, " + "C(" + (valuebox + 1) + ") a " + "C(" + (valuebox2 + 1) + ")" + "\r\n";
		   }
	   }
};
}
