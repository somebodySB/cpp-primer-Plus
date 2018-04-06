// t4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using std::cout;
using std::cin;
using std::endl;
long double getRatio(int, int, int);
int main()
{
	int firstField, num, secondField;
	cout << "input firstField" << endl;
	cin >> firstField;
	if (!cin) {
		cout << "input valid!" << endl;
		return -1;
	}
	cout << "input the num of firstField" << endl;
	cin >> num;
	if (!cin) {
		cout << "input valid!" << endl;
		return -1;
	}
	cout << "input secondField" << endl;
	cin >> secondField;
	if (!cin) {
		cout << "input valid!" << endl;
		return -1;
	}
	cout << "the ratio is:" << getRatio(firstField, num, secondField) << endl;
    return 0;
}

long double getRatio(int firstField,int num,int secondField) {
	long double sumple = 1;
	for (; num > 0; firstField--, num--) {
		sumple = sumple * firstField / num;
	}
	sumple *= secondField;
	return 1 / sumple;
}

