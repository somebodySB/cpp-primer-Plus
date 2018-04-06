// t1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
double getAverage(int a, int b);

int main()
{
	int a=0, b=0;
	std::cout << "please input 2 integer(seperated by Space)" << std::endl;
	//std::cin >> a >> b;
	while (std::cin >> a >> b && a != 0 && b != 0) {
		std::cout << "the average is " << getAverage(a, b) << std::endl << "continue:" << std::endl;
		//std::cin >> a >> b;
	}
    return 0;
}

inline double getAverage(int a,int b)
{
	return 2.0*a*b / (a + b);
}