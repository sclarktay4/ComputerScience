#include "Start Form.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PersonalWeightLossTracker10::StartForm form;
	Application::Run(%form);
	return 0;
}
