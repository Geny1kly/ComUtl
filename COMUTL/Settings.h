#pragma once

using namespace System;

ref class Properties
{
public:
	String^ currentFilename;

	void Load();
	void Save();
};

