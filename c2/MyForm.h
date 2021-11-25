#pragma once

namespace c2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::ComponentModel::IContainer^ components;

	public: SerialPort^ MonochromatorPort = nullptr;
	private: System::Windows::Forms::Button^ button2;
	public:

	public:
	public: SerialPort^ MetexPort = nullptr;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(661, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->saveToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(123, 26);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Location = System::Drawing::Point(28, 42);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(116, 63);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"λ [nm]";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(18, 25);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 780, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 380, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(78, 22);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 380, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// chart1
			// 
			chartArea1->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea1->AxisX->Title = L"λ [nm]";
			chartArea1->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea1->AxisY->Title = L"U_pd [V]";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(30, 118);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Grayscale;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(398, 311);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->progressBar1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->numericUpDown4);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Location = System::Drawing::Point(444, 153);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(184, 231);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Measurement";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(107, 165);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 25);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(17, 196);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(149, 17);
			this->progressBar1->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 25);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Measure";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Δλ : ";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(73, 125);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(76, 22);
			this->numericUpDown4->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"λ_max :";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(73, 87);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 780, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 380, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(76, 22);
			this->numericUpDown3->TabIndex = 2;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 780, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"λ_min :";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(73, 50);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 780, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 380, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(76, 22);
			this->numericUpDown2->TabIndex = 0;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 380, 0, 0, 0 });
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(661, 452);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Pomiar charakterystyki spektralnej i skalowanie fotodiody";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

		private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
			saveFileDialog1->Filter = "Text files (*.csv)|*.csv";

			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

				StreamWriter^ pt = gcnew StreamWriter(saveFileDialog1->FileName, 0, System::Text::Encoding::Default);
				DataVisualization::Charting::DataPoint^ point;
				for (int i = 0; i < chart1->Series["Series1"] -> Points -> Count; i++) {

					point = chart1->Series["Series1"]->Points[i];
					pt->Write((point->XValue).ToString("F4") + ";" + (point->YValues[0]).ToString("F4") + System::Environment::NewLine);
					
				}
					pt->Close();
			}
		}

		private: System::Void mPortOpen() {

			MonochromatorPort = gcnew SerialPort("COM1", 9600, Parity::None, 8, StopBits::One); 
			MonochromatorPort->Open();

			if (MonochromatorPort->IsOpen) {
				
				MonochromatorPort->DtrEnable = true; 
				MonochromatorPort->RtsEnable = true;
			}
			else {

				MessageBox::Show("Couldn't open the port.", " ", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		private: System::Void setLambda(unsigned int m_lGotoWL) {
			
			unsigned char HiB = (m_lGotoWL & 0xFF00) >> 8;
			unsigned char LoB = m_lGotoWL & 0xFF;
			array<unsigned char>^ buffer = gcnew array <unsigned char, 1> {16, HiB, LoB};
			MonochromatorPort->Write(buffer, 0, buffer->GetLength(0));
		}

		private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

			int value = Convert::ToInt32(numericUpDown1->Value);
			setLambda(value);
		}

		private: System::Void metexPortOpen() {
			
			MetexPort = gcnew SerialPort("COM2", 1200, Parity::None, 7, StopBits::Two); 
			MetexPort->Open();
			
			if (MetexPort->IsOpen) {

				MetexPort->DtrEnable = true; 
				MetexPort->RtsEnable = false; 
				MetexPort->ReadTimeout = 2000;
			}
			else {

				MessageBox::Show("Couldn't open the port.", " ", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		private: System::Double getU() {

			array <unsigned char>^ buffer = gcnew array <unsigned char, 1> {'D'};
			MetexPort->Write(buffer, 0, buffer->GetLength(0));

			System::Threading::Thread::Sleep(500);
			
			array <unsigned char, 1>^ buf = gcnew array <unsigned char, 1>(14);
			MetexPort->Read(buf, 0, 14);

			if (buf[13] != 13) {

				MessageBox::Show("Error.", " ", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return 0;
			}

			int sgn = 1;
			if (buf[3] == '-') {

				sgn = -1;
			}

			char str[6];
			for (int i = 0; i < 5; i++) {

				str[i] = buf[4 + i];
			}

			str[5] = '\0';

			String^ str_val = gcnew String(str);
			str_val = str_val->Replace(".", ",");

			double m = 1.0;
			if (buf[9] == 'M') m = 1e6;
			if (buf[9] == 'K') m = 1e3;
			if (buf[11] == 'm') m = 1e-3;
			if (buf[11] == 'u') m = 1e-6;

			double val = sgn * Convert::ToDouble(str_val) * m;
			return val;
		}

		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
			int delta = Convert::ToInt32(numericUpDown3->Value) - Convert::ToInt32(numericUpDown2->Value);
			progressBar1->Maximum = delta;
			
			chart1->Series["Series1"]->Points->Clear();
			timer1->Enabled = true;
		}
		
		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		
			if (progressBar1->Value < progressBar1->Maximum) {

				int lambda = progressBar1->Value + Convert::ToInt32(numericUpDown2->Value);
				setLambda(lambda);
				System::Threading::Thread::Sleep(500);
				double U = getU();
				chart1->Series["Series1"]->Points->AddXY(lambda, U);
				progressBar1->Value = progressBar1->Value + Convert::ToInt32(numericUpDown4->Value);
			}
			else {
				timer1->Enabled = false;
				progressBar1->Value = 0;
				MessageBox::Show("Done!", " ", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			
			timer1->Enabled = false;
			chart1->Series["Series1"]->Points->Clear();
			progressBar1->Value = 0;
		}
		
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
			mPortOpen();
			metexPortOpen();
		}
};
}
