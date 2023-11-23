#pragma once

namespace Lesson9PictureBox {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int m_p[4];

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ tb_x1;
	private: System::Windows::Forms::TextBox^ tb_y1;
	private: System::Windows::Forms::TextBox^ tb_x2;
	private: System::Windows::Forms::TextBox^ tb_y2;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ x1;
	private: System::Windows::Forms::Label^ y1;
	private: System::Windows::Forms::Label^ x2;
	private: System::Windows::Forms::Label^ y2;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tb_x1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_y1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_x2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_y2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->title = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->x1 = (gcnew System::Windows::Forms::Label());
			this->y1 = (gcnew System::Windows::Forms::Label());
			this->x2 = (gcnew System::Windows::Forms::Label());
			this->y2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(19, 80);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(264, 303);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// tb_x1
			// 
			this->tb_x1->Location = System::Drawing::Point(327, 128);
			this->tb_x1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tb_x1->Name = L"tb_x1";
			this->tb_x1->Size = System::Drawing::Size(124, 26);
			this->tb_x1->TabIndex = 1;
			// 
			// tb_y1
			// 
			this->tb_y1->Location = System::Drawing::Point(513, 128);
			this->tb_y1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tb_y1->Name = L"tb_y1";
			this->tb_y1->Size = System::Drawing::Size(124, 26);
			this->tb_y1->TabIndex = 2;
			// 
			// tb_x2
			// 
			this->tb_x2->Location = System::Drawing::Point(327, 186);
			this->tb_x2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tb_x2->Name = L"tb_x2";
			this->tb_x2->Size = System::Drawing::Size(124, 26);
			this->tb_x2->TabIndex = 3;
			// 
			// tb_y2
			// 
			this->tb_y2->Location = System::Drawing::Point(513, 186);
			this->tb_y2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tb_y2->Name = L"tb_y2";
			this->tb_y2->Size = System::Drawing::Size(124, 26);
			this->tb_y2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(417, 348);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Рисовать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->title->Location = System::Drawing::Point(15, 25);
			this->title->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(622, 17);
			this->title->TabIndex = 7;
			this->title->Text = L"Нарисовать линию заданной длины, цвета и в заданном месте поля \"PictureBox\".";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(389, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Координаты точек";
			// 
			// x1
			// 
			this->x1->AutoSize = true;
			this->x1->Location = System::Drawing::Point(289, 133);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(29, 20);
			this->x1->TabIndex = 9;
			this->x1->Text = L"X1";
			// 
			// y1
			// 
			this->y1->AutoSize = true;
			this->y1->Location = System::Drawing::Point(479, 133);
			this->y1->Name = L"y1";
			this->y1->Size = System::Drawing::Size(29, 20);
			this->y1->TabIndex = 10;
			this->y1->Text = L"Y1";
			// 
			// x2
			// 
			this->x2->AutoSize = true;
			this->x2->Location = System::Drawing::Point(290, 189);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(29, 20);
			this->x2->TabIndex = 11;
			this->x2->Text = L"X2";
			// 
			// y2
			// 
			this->y2->AutoSize = true;
			this->y2->Location = System::Drawing::Point(481, 190);
			this->y2->Name = L"y2";
			this->y2->Size = System::Drawing::Size(29, 20);
			this->y2->TabIndex = 12;
			this->y2->Text = L"Y2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(645, 402);
			this->Controls->Add(this->y2);
			this->Controls->Add(this->x2);
			this->Controls->Add(this->y1);
			this->Controls->Add(this->x1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->title);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tb_y2);
			this->Controls->Add(this->tb_x2);
			this->Controls->Add(this->tb_y1);
			this->Controls->Add(this->tb_x1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"Рисуем линию";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion

	// выше создали массив	int m_p[4];

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		m_p[0] = Convert::ToInt32(tb_x1->Text);
		m_p[1] = Convert::ToInt32(tb_y1->Text);
		m_p[2] = Convert::ToInt32(tb_x2->Text);
		m_p[3] = Convert::ToInt32(tb_y2->Text);
		pictureBox1->Refresh();
	}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	e->Graphics->DrawLine(System::Drawing::Pens::Blue, m_p[0], m_p[1], m_p[2], m_p[3]);
}

};
}
