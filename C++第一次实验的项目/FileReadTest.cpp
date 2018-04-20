#include "stdafx.h"
#include "FileReadTest.h"

FileReadTest::FileReadTest()
{
#if 1
	outFile.open("note.txt", ios::in | ios::out| ios::trunc);
	int n1 = outFile.tellp();
	int n2 = outFile.tellg();
	cout << "outtellp = " << n1 << endl;
	cout << "outtellg = " << n2 << endl;
#endif
}

void FileReadTest::Fileclose()
{
	outFile.close();
}

void FileReadTest::Fileinput()
{
	outFile.seekg(0, ios::end);
	char string2[N];
	cin.getline(string2, sizeof(string2));
	outFile << string2 << endl;
}

void FileReadTest::Fileoutput()
{
	outFile.seekp(0, ios::beg);
	int n1 = outFile.tellp();
	int n2 = outFile.tellg();
	cout << "outtellp = " << n1 << endl;
	cout << "outtellg = " << n2 << endl;
	char ch[N];
	while (outFile.peek() != EOF) {
		outFile.getline(ch, sizeof(ch));
		cout << ch << endl;
	}
}


FileReadTest::~FileReadTest()
{
	cout << "you have delete the class FileReadTest" << endl;
}
