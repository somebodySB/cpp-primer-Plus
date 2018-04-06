// t2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using std::cout;
using std::cin;
using std::endl;

void getGrades(int*);
void showGrades(int*);
float Average(int*);
int main()
{
	int grades[10];
	getGrades(grades);
	showGrades(grades);
	cout << "the average is " << Average(grades);
    return 0;
}

void getGrades(int grades[10])
{
	for (int i = 0; i < 10; i++) {
		grades[i] = -1;
	}
	cout << "input grades:(input -1 to end it)" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> grades[i];
		if (!cin) {
			cout << "input valid!" << endl;
			return;
		}
		else if (grades[i] == -1) {
			return;
		}
	}
}

void showGrades(int grades[10]) {
	for (int i = 0; i < 10; i++) {
		if (grades[i] == -1) {
			return;
		}
		else {
			cout << grades[i] << " ";
		}
	}
	cout << endl;
}

float Average(int grades[10]) {
	int sum = 0;
	int i = 0;
	for (; i < 10; i++) {
		if (grades[i] == -1) {
			break;
		}
		else {
			sum += grades[i];
		}
	}
	if (i == 0) {
		return 0;
	}
	return sum / i;
}