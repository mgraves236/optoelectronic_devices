#pragma once

namespace c6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Timer^ timer1;

	public: short handle = 0;

	public:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox2;



	protected:











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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Top;
			chartArea1->AxisX->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea1->AxisX->Title = L"czêstotliwoœæ";
			chartArea1->AxisY->ArrowStyle = System::Windows::Forms::DataVisualization::Charting::AxisArrowStyle::Triangle;
			chartArea1->AxisY->Title = L"wzmocnienie";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(12, 57);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::SystemColors::WindowText;
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(422, 346);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(732, 28);
			this->menuStrip1->TabIndex = 1;
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
			// 
			// timer1
			// 
			this->timer1->Interval = 10000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 17);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Sygna³";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"sinus", L"prostok¹t", L"trójk¹t" });
			this->comboBox1->Location = System::Drawing::Point(128, 110);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(95, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(195, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"kHz";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Czêstotliwoœæ = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(195, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"mV";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Amplituda = ";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(128, 64);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(61, 22);
			this->numericUpDown2->TabIndex = 1;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(128, 23);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(61, 22);
			this->numericUpDown1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(458, 57);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(250, 193);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(242, 164);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Konfiguracja";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(115, 26);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(107, 24);
			this->comboBox2->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"CHANNEL";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->numericUpDown2);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->numericUpDown1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(242, 164);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Parametry";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(242, 164);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 428);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Pomiar charakterystyki pasywnych filtrow RC";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//handle = ps2000_open_unit();
		if (!handle) {
			MessageBox::Show("Unable to open device.", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			//check communication
			//ps2000_flash_led(handle);
		}
	}
	private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		/*if(handle){
			ps2000_close_unit(handle);
		}*/
	}


	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		/*
		* yes or no-------------------------
		*/
		int no_of_samples = 200;
		short timebase = 16;
		long time_indisposed_ms = 0;
		//ps2000_run_block(handle, no_of_samples, timebase, 1, &time_indisposed_ms);

		//while (ps2000_ready(handle) <= 0);
	
		chart1->Series["Series1"]->Points->Clear();

		short overflow = 0;
		short* buffer_a = new short[no_of_samples];
		short* buffer_b = new short[no_of_samples];
		//ps2000_get_values(handle, buffer_a, buffer_b, NULL, NULL, &overflow, no_of_samples);

		float dt = time_indisposed_ms / (float)no_of_samples;
		for (int i = 0; i < no_of_samples; i++) {

			chart1->Series["Series1"]->Points->AddXY(i * dt, buffer_a[i]);
		}

		delete buffer_a;
		delete buffer_b;

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
};
}
