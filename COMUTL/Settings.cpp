#include "Settings.h"

using namespace System::IO;

void Properties::Load() {
	FileStream^ fs;
	try {
		fs = gcnew FileStream("settings", FileMode::Open);
	}
	catch (...) {
		currentFilename = nullptr;
		return;
	}
	auto reader = gcnew BinaryReader(fs);

	currentFilename = reader->ReadString();

	reader->Close();
}

void Properties::Save() {
	FileStream^ fs;
	try {
		fs = gcnew FileStream("settings", FileMode::Create);
	}
	catch (...) {
		return;
	}
	auto writer = gcnew BinaryWriter(fs);

	writer->Write(currentFilename);

	writer->Close();
}

