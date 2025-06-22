#include "Settings.h"

using namespace System::IO;

void Properties::Load() {
	currentFilename = nullptr;

	FileStream^ fs;
	try {
		fs = gcnew FileStream("properties", FileMode::Open);
	}
	catch (...) {
		return;
	}
	auto reader = gcnew BinaryReader(fs);

	if (reader->ReadBoolean()) {
		currentFilename = reader->ReadString();
	}

	reader->Close();
}

void Properties::Save() {
	FileStream^ fs;
	try {
		fs = gcnew FileStream("properties", FileMode::Create);
	}
	catch (...) {
		return;
	}
	auto writer = gcnew BinaryWriter(fs);

	writer->Write(!!currentFilename);
	if (!currentFilename) return;

	writer->Write(currentFilename);

	writer->Close();
}

