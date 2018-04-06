// t5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using std::cout;
using std::cin;
using std::endl;
int getFactorial(int);
int main()
{
	int num;
	cout << "input a number:" << endl;
	cin >> num;
	if (!cin) {
		cout << "input valid" << endl;
		return -1;
	}
	cout << "the factorial is " << getFactorial(num) << endl;
    return 0;
}

int getFactorial(int num) {
	if (num != 0) {
		num *= getFactorial(num - 1);
	}
	else
	{
		return 1;
	}
	return num;
}
