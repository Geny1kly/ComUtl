#include "HeadForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	COMUTL::HeadForm form;
	Application::Run(%form);
}
