// C++第一次实验的项目.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "InputTest.h"
#include "Filereadtest.h"
#include "CMypoint.h"
#define itest InputTest
#define frtest FileReadTest
#define cp CMypoint
using namespace std;
void main() {
#if 0
	itest it1;
#endif
#if 0
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
#if 1 
	int i = 0;
	float a[N] = { 0 };
	cin >> a[0];
	char temp = cin.get();
	while (temp != '\n') {
		i++;
		cin >> a[i];
		temp = cin.get();
	}
	if (i == 3 || i == 4) {
		CMypoint cp1(a[0], a[1], a[2], a[3]);
		cp1.CMycaculate();
	}
	else if (i >= 5) {
		CMypoint cp1(a[0], a[1], a[2], a[3],
			a[4], a[5]);
		cp1.CMycaculate();
	}
	else {
		cout << "point number is not yes" << endl;
		exit(0);
	}
	getchar();
	getchar();
#endif

}