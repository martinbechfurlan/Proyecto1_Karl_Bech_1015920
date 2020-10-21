#include"settings11.h"
#pragma once

namespace Proyecto1KarlBech1015920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;	
	/// <summary>
	/// Resumen de ingreso
	/// </summary>
	public ref class ingreso : public System::Windows::Forms::Form
	{
	public :	
		static int pilas;
		array<String^>^ archivoColumna;
		static int capacidad;
	private: System::Windows::Forms::NumericUpDown^ quant_txt;
	public:
	private: System::Windows::Forms::NumericUpDown^ espacio_txt;
	private: System::Windows::Forms::Button^ comprobar_btn;
	public:		
		ingreso(void)
		{		
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ingreso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ quant_lbl;
	private: System::Windows::Forms::Label^ espacio_lbl;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::OpenFileDialog^ ofd_txt;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ingreso::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->quant_lbl = (gcnew System::Windows::Forms::Label());
			this->espacio_lbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ofd_txt = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comprobar_btn = (gcnew System::Windows::Forms::Button());
			this->quant_txt = (gcnew System::Windows::Forms::NumericUpDown());
			this->espacio_txt = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quant_txt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->espacio_txt))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"RazerF5", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(452, 96);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Siguiente";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &ingreso::modo_btn_Click);
			// 
			// quant_lbl
			// 
			this->quant_lbl->AutoSize = true;
			this->quant_lbl->BackColor = System::Drawing::Color::Transparent;
			this->quant_lbl->Font = (gcnew System::Drawing::Font(L"RazerF5", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quant_lbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->quant_lbl->Location = System::Drawing::Point(8, 42);
			this->quant_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->quant_lbl->Name = L"quant_lbl";
			this->quant_lbl->Size = System::Drawing::Size(166, 15);
			this->quant_lbl->TabIndex = 2;
			this->quant_lbl->Text = L"Ingrese la cantidad de pilas:";
			// 
			// espacio_lbl
			// 
			this->espacio_lbl->AutoSize = true;
			this->espacio_lbl->BackColor = System::Drawing::Color::Transparent;
			this->espacio_lbl->Font = (gcnew System::Drawing::Font(L"RazerF5", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->espacio_lbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->espacio_lbl->Location = System::Drawing::Point(8, 96);
			this->espacio_lbl->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->espacio_lbl->Name = L"espacio_lbl";
			this->espacio_lbl->Size = System::Drawing::Size(194, 15);
			this->espacio_lbl->TabIndex = 3;
			this->espacio_lbl->Text = L"Ingrese la capacidad de las pilas:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(449, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Insertar archivo de texto";
			this->label1->Visible = false;
			// 
			// ofd_txt
			// 
			this->ofd_txt->FileName = L"openFileDialog1";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"RazerF5", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(452, 42);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 28);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Ingresar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &ingreso::origen_btn_Click);
			// 
			// comprobar_btn
			// 
			this->comprobar_btn->BackColor = System::Drawing::Color::White;
			this->comprobar_btn->Font = (gcnew System::Drawing::Font(L"RazerF5", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comprobar_btn->ForeColor = System::Drawing::Color::Black;
			this->comprobar_btn->Location = System::Drawing::Point(11, 123);
			this->comprobar_btn->Margin = System::Windows::Forms::Padding(2);
			this->comprobar_btn->Name = L"comprobar_btn";
			this->comprobar_btn->Size = System::Drawing::Size(111, 30);
			this->comprobar_btn->TabIndex = 8;
			this->comprobar_btn->Text = L"Comprobar!";
			this->comprobar_btn->UseVisualStyleBackColor = false;
			this->comprobar_btn->Click += gcnew System::EventHandler(this, &ingreso::comprobar_btn_Click);
			// 
			// quant_txt
			// 
			this->quant_txt->Location = System::Drawing::Point(206, 42);
			this->quant_txt->Name = L"quant_txt";
			this->quant_txt->Size = System::Drawing::Size(120, 20);
			this->quant_txt->TabIndex = 9;
			this->quant_txt->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->quant_txt->ValueChanged += gcnew System::EventHandler(this, &ingreso::quant_txt_ValueChanged);
			// 
			// espacio_txt
			// 
			this->espacio_txt->Location = System::Drawing::Point(206, 90);
			this->espacio_txt->Name = L"espacio_txt";
			this->espacio_txt->Size = System::Drawing::Size(120, 20);
			this->espacio_txt->TabIndex = 10;
			this->espacio_txt->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->espacio_txt->ValueChanged += gcnew System::EventHandler(this, &ingreso::espacio_txt_ValueChanged);
			// 
			// ingreso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(669, 229);
			this->Controls->Add(this->espacio_txt);
			this->Controls->Add(this->quant_txt);
			this->Controls->Add(this->comprobar_btn);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->espacio_lbl);
			this->Controls->Add(this->quant_lbl);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ingreso";
			this->Text = L"Ingreso";
			this->Load += gcnew System::EventHandler(this, &ingreso::ingreso_load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quant_txt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->espacio_txt))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ingreso_load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void modo_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		settings11::diff = archivoColumna;
		settings11::capacidadpilas = capacidad;
		settings11::cantpilas = pilas;
		settings11^ form = gcnew settings11();
		form->ShowDialog();
	}
	private: System::Void origen_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		ofd_txt->Filter = "Archivos separados por coma (txt) | *.txt";
		ofd_txt->FileName = "";
		bool not_letter = true;


		int z = 0;
		String^ letra;

		int cont = 0;
		if (ofd_txt->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			array<String^>^ lineas = File::ReadAllLines(ofd_txt->FileName);

			if (lineas->Length > 0) {
				archivoColumna = lineas[0]->Split(',');
				if (lineas->Length == 1) {
					for (int i = 0; i < archivoColumna->Length; i++) {
						letra = archivoColumna[i];
						if (letra == "x" || letra == "X") {
							cont++;
							z = 0;
						}
						else if(letra=="B" || letra =="Z" || letra=="W" || letra == "R" || letra == "Y" || letra == "G" || letra == "P" || letra == "N")
						{
							z++;							
						}
						else {
							not_letter = false;
						}
					}
					if (cont < pilas) {
						if (not_letter == false) {
							MessageBox::Show("LETRAS NO VÁLIDAS, o no concuerda con el ingreso!", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);	
							button1->Visible = false;							
						}
						else {
							if (comprobacion_cantidad(archivoColumna, pilas) == false) {
								MessageBox::Show("MÁS COLORES QUE GRUPOS, o no concuerda con el ingreso!", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
								button1->Visible = false;
							}
							else {
								if (letras_check(archivoColumna, capacidad) == false) {
									MessageBox::Show("INGRESO DE MUCHOS COLORES IGUALES SOBREPASANDO LA CAPACIDAD DE LA LISTA, o no concuerda con el ingreso!", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
									button1->Visible = false;
								}
								else {
									if (t(z, capacidad) == false) {
										button1->Visible = false;
										MessageBox::Show("ESTÁ SOBREPASANDO LA CAPACIDAD DE LA PILA CON COLORES, o no concuerda con el ingreso!", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
									}
									else {
										button1->Visible = true;
									}
								}
							}
						}
					}
					else {
						MessageBox::Show("Posee más saltos de los permitidos, o no concuerda con el ingreso!", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						button1->Visible = false;
					}					
				}
				else {
					MessageBox::Show("El archivo de texto posee demasiadas lineas, o no concuerda con el ingreso!", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					button1->Visible = false;
				}
			}
			else{
				MessageBox::Show("El archivo de texto está incompleto, o no concuerda con el ingreso!", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				button1->Visible = false;
			}
		}
		else {
			MessageBox::Show("No se seleccionó ningún archivo, o no concuerda con el ingreso!","Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
			button1->Visible = false;
		}
	}

private: System::Void comprobar_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	
		pilas = Convert::ToInt32(quant_txt->Text);
		capacidad = Convert::ToInt32(espacio_txt->Text);
		button2->Visible = true;
	
}

	   bool comprobacion_cantidad(array<String^>^ doc, int pil) {
		   int capacidadpilas = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0;
		   String^ letra;
		   for (int i = 0; i < doc->Length; i++) {
			   letra = doc[i];
			   if (letra == "B") {
				   capacidadpilas = 1;
			   }
			   else if (letra == "Z") {
				   c2 = 1;
			   }
			   else if (letra == "W") {
				   c3 = 1;
			   }
			   else if (letra == "R") {
				   c4 = 1;
			   }
			   else if (letra == "Y") {
				   c5 = 1;
			   }
			   else if (letra == "G") {
				   c6 = 1;
			   }
			   else if (letra == "P") {
				   c7 = 1;
			   }
			   else if (letra == "N") {
				   c8 = 1;
			   }
		   }
		   int suma = capacidadpilas + c2 + c3 + c4 + c5 + c6 + c7 + c8;
		   if (suma > pil) {
			   return false;
		   }
		   else {
			   return true;
		   }
	   }
	   
	   bool letras_check(array<String^>^ bloc, int check) {
		   int capacidadpilas = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0;
		   String^ letra;
		   for (int i = 0; i < bloc->Length; i++) {
			   letra = bloc[i];
			   if (letra == "B") {
				   capacidadpilas++;	
				   if (t(capacidadpilas, check)==false) {
					   return false;
				   }
			   }
			   if (letra == "Z") {
				   c2++;
				   if (t(c2, check) == false) {
					   return false;
				   }
			   }
			   if (letra == "W") {
				   c3++;
				   if (t(c3, check) == false) {
					   return false;
				   }
			   }
			   if (letra == "R") {
				   c4++;
				   if (t(c4, check) == false) {
					   return false;
				   }
			   }
			   if (letra == "Y") {
				   c5++;
				   if (t(c5, check) == false) {
					   return false;
				   }
			   }
			   if (letra == "G") {
				   c6++;
				   if (t(c6, check) == false) {
					   return false;
				   }
			   }
			   if (letra == "P") {
				   c7++;
				   if (t(c7, check) == false) {
					   return false;
				   }
			   }
			   if (letra == "N") {
				   c8++;
				   if (t(c8, check) == false) {
					   return false;
				   }
			   }
		   }
		   return true;
	   }
	   bool t(int c, int cap) {
		   if (c > cap) {
			   return false;
		   }
		   else {
			   return true;
		   }
	   }
private: System::Void quant_txt_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	quant_txt->Maximum = 8;
	quant_txt->Minimum = 2;
}
private: System::Void espacio_txt_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	espacio_txt->Maximum = 100;
	espacio_txt->Minimum = 2;
}
};
}
