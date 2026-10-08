#include "MyForm.h"
#include <locale>
#include <msclr/marshal.h>
using namespace System;
using namespace System::Windows::Forms;
[System::STAThreadAttribute]
int main(array<String^>^ args)
{
	setlocale(LC_ALL, "ru");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project5::MyForm form;
	Application::Run(% form);
}
