// complier.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"


using namespace complier;

[STAThreadAttribute]
int main()
{
	// Enabling Windows XP visual effects before any controls are created
	//Application::EnableVisualStyles();
	//Application::SetCompatibleTextRenderingDefault(false); 

	//// Create the main window and run it
	//Application::Run(gcnew Form1());
	Form1 obj;
	

	obj.ShowDialog();
	return 0;
}
//array<System::String ^> ^args