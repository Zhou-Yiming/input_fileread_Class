#include "stdafx.h"
#include "InputTest.h"

using namespace std;
InputTest::InputTest()
{
	string string1;
	cout << "Please input you string:";
	cin >> string1;
	if (string1.empty()) {
		cerr << "you have input an empty string.";
	}
	else {
		cout << "you have input this string: " << string1 << endl;
	}
	char string2[5];
	cin.getline(string2, 5);
	cout << "you have input this string: " << string2 << endl;
	cin.clear();
	cin.ignore(255, '\n');//��ջ�����,���255λ,����\n��ǰ�������(���һ��) 
	cin >> string1;
	cout << "you have input this string: " << string1 << endl;
}


InputTest::~InputTest()
{
	cout << "you have close the class InputTest" << endl;
}
