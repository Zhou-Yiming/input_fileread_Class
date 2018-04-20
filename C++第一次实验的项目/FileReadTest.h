//#pragma once
#include "stdafx.h"
#define N 255
using namespace std;
class FileReadTest
{

public:	

	FileReadTest();
	~FileReadTest();
	void Fileclose();
	void Fileinput();
	void Fileoutput();
private:
	fstream outFile;

};

