#include "MyForm.h"
//#include "ps2000imports.h".

using namespace c6;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew c6::MyForm());
}
