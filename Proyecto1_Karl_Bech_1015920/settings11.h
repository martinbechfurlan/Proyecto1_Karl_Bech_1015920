#include"juego.h"
#include"juego2.h"
#pragma once

namespace Proyecto1KarlBech1015920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de settings11
	/// </summary>
	public ref class settings11 : public System::Windows::Forms::Form
	{
	public:
		static bool modo;
		static int poc;
		static int dificultad;
		static int cantpilas;
		static int capacidadpilas;
	private: System::Windows::Forms::Button^ campo2_btn;
	public:
		static array<String^>^ diff;
		settings11(void)
		{
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~settings11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ campo_btn;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ mod_lbl;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ sort_lbl;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ mode_lbl;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(settings11::typeid));
			this->campo_btn = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->mod_lbl = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->sort_lbl = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->mode_lbl = (gcnew System::Windows::Forms::Label());
			this->campo2_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// campo_btn
			// 
			this->campo_btn->BackColor = System::Drawing::Color::White;
			this->campo_btn->Font = (gcnew System::Drawing::Font(L"RazerF5", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->campo_btn->ForeColor = System::Drawing::Color::Black;
			this->campo_btn->Location = System::Drawing::Point(120, 231);
			this->campo_btn->Margin = System::Windows::Forms::Padding(2);
			this->campo_btn->Name = L"campo_btn";
			this->campo_btn->Size = System::Drawing::Size(123, 31);
			this->campo_btn->TabIndex = 15;
			this->campo_btn->Text = L"GO!";
			this->campo_btn->UseVisualStyleBackColor = false;
			this->campo_btn->Visible = false;
			this->campo_btn->Click += gcnew System::EventHandler(this, &settings11::campo_btn_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Fácil", L"Medio", L"Difícil" });
			this->comboBox3->Location = System::Drawing::Point(13, 180);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(97, 21);
			this->comboBox3->TabIndex = 14;
			this->comboBox3->Visible = false;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &settings11::comboBox3_SelectedIndexChanged);
			// 
			// mod_lbl
			// 
			this->mod_lbl->AutoSize = true;
			this->mod_lbl->BackColor = System::Drawing::Color::Transparent;
			this->mod_lbl->Font = (gcnew System::Drawing::Font(L"RazerF5", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mod_lbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->mod_lbl->Location = System::Drawing::Point(8, 141);
			this->mod_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->mod_lbl->Name = L"mod_lbl";
			this->mod_lbl->Size = System::Drawing::Size(147, 23);
			this->mod_lbl->TabIndex = 13;
			this->mod_lbl->Text = L"Elija la dificultad";
			this->mod_lbl->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Pila", L"Cola" });
			this->comboBox2->Location = System::Drawing::Point(13, 110);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(97, 21);
			this->comboBox2->TabIndex = 12;
			this->comboBox2->Visible = false;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &settings11::comboBox2_SelectedIndexChanged);
			// 
			// sort_lbl
			// 
			this->sort_lbl->AutoSize = true;
			this->sort_lbl->BackColor = System::Drawing::Color::Transparent;
			this->sort_lbl->Font = (gcnew System::Drawing::Font(L"RazerF5", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sort_lbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->sort_lbl->Location = System::Drawing::Point(8, 88);
			this->sort_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->sort_lbl->Name = L"sort_lbl";
			this->sort_lbl->Size = System::Drawing::Size(157, 15);
			this->sort_lbl->TabIndex = 11;
			this->sort_lbl->Text = L"Elija la manera de ordenar";
			this->sort_lbl->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Modo con pausas", L"Modo sin pausas" });
			this->comboBox1->Location = System::Drawing::Point(13, 51);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(97, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &settings11::comboBox1_SelectedIndexChanged);
			// 
			// mode_lbl
			// 
			this->mode_lbl->AutoSize = true;
			this->mode_lbl->BackColor = System::Drawing::Color::Transparent;
			this->mode_lbl->Font = (gcnew System::Drawing::Font(L"RazerF5", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mode_lbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->mode_lbl->Location = System::Drawing::Point(8, 12);
			this->mode_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->mode_lbl->Name = L"mode_lbl";
			this->mode_lbl->Size = System::Drawing::Size(189, 23);
			this->mode_lbl->TabIndex = 9;
			this->mode_lbl->Text = L"Elija el modo de juego";
			// 
			// campo2_btn
			// 
			this->campo2_btn->BackColor = System::Drawing::Color::White;
			this->campo2_btn->Font = (gcnew System::Drawing::Font(L"RazerF5", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->campo2_btn->ForeColor = System::Drawing::Color::Black;
			this->campo2_btn->Location = System::Drawing::Point(120, 198);
			this->campo2_btn->Name = L"campo2_btn";
			this->campo2_btn->Size = System::Drawing::Size(123, 28);
			this->campo2_btn->TabIndex = 16;
			this->campo2_btn->Text = L"GO!";
			this->campo2_btn->UseVisualStyleBackColor = false;
			this->campo2_btn->Visible = false;
			this->campo2_btn->Click += gcnew System::EventHandler(this, &settings11::campo2_btn_Click);
			// 
			// settings11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(346, 284);
			this->Controls->Add(this->campo2_btn);
			this->Controls->Add(this->campo_btn);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->mod_lbl);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->sort_lbl);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->mode_lbl);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"settings11";
			this->Text = L"Settings11";
			this->Load += gcnew System::EventHandler(this, &settings11::settings_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int v1, v2, v3;
	private: System::Void campo_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		juego::p1 = cantpilas;
		juego::tamañopilas = capacidadpilas;
		juego::datos = diff;
		juego::mpila = modo;
		juego::choosemode = poc;
		juego::difp = dificultad;
		juego^ form = gcnew juego();
		form->ShowDialog();
		this->Hide();
	}
	private: System::Void settings_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		v1 = comboBox1->SelectedIndex;
		v2 = comboBox2->SelectedIndex;
		v3 = comboBox3->SelectedIndex;
		if (v1 == 0) {
			campo_btn->Visible = false;
			modo = true;
			poc = 0;
			sort_lbl->Visible = false;
			comboBox2->Visible = false;
			mod_lbl->Visible = true;
			comboBox3->Visible = true;

		}
		else {
			campo2_btn->Visible = false;
			modo = false;
			mod_lbl->Visible = false;
			comboBox3->Visible = false;
			sort_lbl->Visible = true;
			comboBox2->Visible = true;
		}
	}
		   int dificultad_m(int v) {
			   if (v == 0) {
				   dificultad = 1;
				   return dificultad;
			   }
			   else if (v == 1) {
				   dificultad = 2;
				   return dificultad;
			   }
			   else if (v == 2) {
				   dificultad = 3;
				   return dificultad;
			   }
		   }
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		v2 = comboBox2->SelectedIndex;
		if (v2 == 0) {
			campo2_btn->Visible = true;
			poc = 1;
			
			
		}
		else if (v2 == 1) {
			campo2_btn->Visible = true;
			poc = 2;
			
			
		}
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		v3 = comboBox3->SelectedIndex;
		dificultad = dificultad_m(v3);
		campo_btn->Visible = true;
	}
	
	private: System::Void campo2_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		juego2::p1 = cantpilas;
		juego2::tamañopilas = capacidadpilas;
		juego2::datos = diff;
		juego2::mpila = modo;
		juego2::choosemode = poc;
		juego2::difp = dificultad;
		juego2^ form = gcnew juego2();
		form->ShowDialog();
	}
};
}
