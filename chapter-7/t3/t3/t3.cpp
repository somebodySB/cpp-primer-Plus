// t3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using std::cout;
using std::endl;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void showBox(box);
void setVolume(box*);
int main()
{
	box myBox{ "tick",10,20,30 };
	box *pm_box;
	showBox(myBox);
	setVolume(&myBox);
	showBox(myBox);
    return 0;
}

void showBox(box b) {
	std::cout << "maker:" << b.maker << std::endl
		<< "height:" << b.height << endl
		<< "width:" << b.width << endl
		<< "length:" << b.length << endl
		<< "volume" << b.volume << endl;
}

void setVolume(box *pbox) {
	if (pbox == nullptr) {
		cout << "the box is empty" << endl;
	}
	pbox->volume = pbox->height * pbox->length * pbox->width;
}