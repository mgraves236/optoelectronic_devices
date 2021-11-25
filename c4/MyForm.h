#pragma once

namespace c4 {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;

	public: SerialPort^ AX3005Port = nullptr;
	public: SerialPort^ MetexPort = nullptr;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::CheckBox^ checkBox1;






	public:
	private: System::ComponentModel::IContainer^ components;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(700, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlLight;
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
			// 
			// chart1
			// 
			chartArea1->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea1->AxisX->Title = L"U [V]";
			chartArea1->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::SharpTriangle;
			chartArea1->AxisY->Title = L"I [A]";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(15, 57);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(434, 335);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Location = System::Drawing::Point(480, 72);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(121, 59);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"U [V]";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown1->Location = System::Drawing::Point(27, 25);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(64, 22);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->progressBar1);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->numericUpDown4);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Location = System::Drawing::Point(477, 149);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(203, 243);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Measurement";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(17, 193);
			this->progressBar1->Maximum = 1100;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(172, 20);
			this->progressBar1->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(109, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 27);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 156);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 27);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Measure";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"ΔU :";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown4->Location = System::Drawing::Point(71, 112);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(64, 22);
			this->numericUpDown4->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"U_max :";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown3->Location = System::Drawing::Point(71, 77);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(64, 22);
			this->numericUpDown3->TabIndex = 3;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"U_min :";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown2->Location = System::Drawing::Point(71, 37);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(64, 22);
			this->numericUpDown2->TabIndex = 1;
			// 
			// timer1
			// 
			this->timer1->Interval = 10000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(480, 45);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(121, 21);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Output Enable";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 418);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Pomiar charakterystyki I-U diody półprzewodnikowej";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			
			/*openPower();
			metexPortOpen();*/

			numericUpDown1->DecimalPlaces = 2;
			numericUpDown2->DecimalPlaces = 2;
			numericUpDown3->DecimalPlaces = 2;
			numericUpDown4->DecimalPlaces = 2;
		}

		private: System::Void openPower() {
			AX3005Port = gcnew SerialPort("COM5", 9600, Parity::None, 8, StopBits::One); 
			AX3005Port->Open();
			
			if (!AX3005Port->IsOpen) {

				MessageBox::Show("Couldn't open the port.", " ", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
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

		private: System::Void setU(double value) {

			String^ str_val = (value).ToString("N2");
		
			if (value < 10) {
				
				str_val = "0" + str_val;
			}
			AX3005Port->Write("VSET1:" + str_val +"\\r\\n");
	   }
		
		private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

			double value = Convert::ToDouble(numericUpDown1->Value);
			setU(value);
		}

		
		#define METEX_NO_ERROR 0
		#define METEX_ERROR -1

		private: int getI(double* value) {

			array <unsigned char>^ buffer = gcnew array <unsigned char, 1> {'D'};
			MetexPort->Write(buffer, 0, buffer->GetLength(0));

			System::Threading::Thread::Sleep(500);

			array <unsigned char, 1>^ buf = gcnew array <unsigned char, 1>(14);
			MetexPort->Read(buf, 0, 14);

			if (buf[13] != 13) {
				return METEX_ERROR;
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

			*value = sgn * Convert::ToDouble(str_val) * m;
			return METEX_NO_ERROR;
		}
		
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			
			int delta = Convert::ToInt32(numericUpDown3->Value * 100) - Convert::ToInt32(numericUpDown2->Value * 100);
			progressBar1->Maximum = delta + Convert::ToInt32(numericUpDown4->Value * 100);

			chart1->Series["Series1"]->Points->Clear();
			timer1->Enabled = true;
			
		}

		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		
			double value = 0;

			if (progressBar1->Value < progressBar1->Maximum) {

				double U = Convert::ToDouble(progressBar1->Value)/100 + Convert::ToDouble(numericUpDown2->Value);
				setU(U);
				System::Threading::Thread::Sleep(500);
				if (getI(&value) == METEX_NO_ERROR) {

					chart1->Series["Series1"]->Points->AddXY(U, value);
				}
				progressBar1->Value += Convert::ToInt32(numericUpDown4->Value * 100);
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

		private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		saveFileDialog1->Filter = "Text files (*.csv)|*.csv";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			StreamWriter^ pt = gcnew StreamWriter(saveFileDialog1->FileName, 0, System::Text::Encoding::Default);
			DataVisualization::Charting::DataPoint^ point;
			for (int i = 0; i < chart1->Series["Series1"]->Points->Count; i++) {

				point = chart1->Series["Series1"]->Points[i];
				pt->Write((point->XValue).ToString("F4") + ";" + (point->YValues[0]).ToString("F4") + System::Environment::NewLine);

			}
			pt->Close();
		}
	}
	
		private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox1->Checked) {
				AX3005Port->Write("OUTPUT1\\r\\n");
			} else {
				AX3005Port->Write("OUTPUT0\\r\\n");
			}
		}
};
}
