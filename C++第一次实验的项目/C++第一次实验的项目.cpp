// C++第一次实验的项目.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "InputTest.h"
#include "Filereadtest.h"
#define itest InputTest
#define frtest FileReadTest
using namespace std;
void main() {
#if 0
	itest it1;
#endif
#if 1
	frtest frt1;
	frt1.Fileinput();
	frt1.Fileoutput();
	frt1.Fileclose();
#endif
#if 0
	string str;
	cin >> str;
	cout << str << endl;
#endif 
	getchar();
	getchar();
}

