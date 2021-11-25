#include "MyForm.h"


using namespace c2;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew c2::MyForm());
}

