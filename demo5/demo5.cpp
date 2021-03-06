#include "pch.h"
#include <iostream>

using namespace std;

// 封装
// 主角是类和对象
// 配角表：
// 数据成员 & 成员函数（构成精彩而完整的类）
// 构造函数 & 析构函数（描述了对象的生生死死）
// 对象复制 & 对象赋值（是累的定义充满意义）
// 对象数组 & 对象指针（将应用形态发挥淋漓尽致）
// this指针（贯穿始终，使类和对象有机结合）

// 类的定义（目的的不同抽象的信息也不同）
class Dog
{
public: //选择性暴露（封装）
	//类的数据成员（数据属性）
	char name[20];
	int age;
	int type;

	// 成员函数（方法）
	void speak();
	void run();
protected: //隐藏的
	// 蛋白质
};

// 访问限定符
// public 公共
// protected 受保护
// private 私有


// 对象实例化（比喻：类是一个模板，实例化就是根据类的设计制造出多个对象的过程）
// 从栈中实例化
// 从堆中实例化

// 栈
class TV
{
public:
	char name[20];
	int type;

	void changeVol();
	void power();
};


// demo
class Coordinate
{
public:
	int x;
	int y;

	void printX()
	{
		cout << x << endl;
	}

	void printY()
	{
		cout << y << endl;
	}
};

int main(void)
{
	// #####################################################
	// 从栈中实例化
	// TV tv;//定义对象
	// TV tv[20]; //定义对象的数组
	// 注：从栈中实例化的对象或数组，使用完之后系统会自动释放内存


	// 从堆中实例化
	// TV* p = new TV(); //定义对象
	// TV* q = new TV[20]; //定义对象数组
	// 先使用TV定义一个指针，指向申请的内存new TV()，实际上就是从堆中实例化，未来就所谓TV这个对象使用;

	// delete p;
	// delete []q;
	// p = NULL;
	// q = NULL;
	// 注：从堆中申请的内存，必须要在使用之后释放


	// #####################################################
	// 对象成员的访问方法
	// 栈
	// TV tv; // 对象
	// tv.type = 0;
	// tv.changeVol();
	//
	// TV tv1[5]; //对象的数组
	// for (int i = 0; i < 5; i++)
	// {
	// 	tv1[i].type = 0;
	// 	tv1[i].changeVol();
	// };


	// 堆
	// TV* p = new TV(); // 对象
	// p->type = 0;
	// p->changeVol();
	// delete p;
	// p = NULL;
	//
	// TV* q = new TV[5]; // 对象数组
	// for (int i = 0; i < 5; i++)
	// {
	// 	q[i].type = 0;
	// 	q[i].changeVol();
	// }
	// delete[]q;
	// q = NULL;

	Coordinate coor;

	coor.x = 1;
	coor.y = 20;

	coor.printX();
	coor.printY();


	Coordinate* coor2 = new Coordinate;
	if (coor2 == NULL)
	{
		return 0;
	}
	coor2->x = 100;
	coor2->y = 100;
	coor2->printX();
	coor2->printY();
	delete coor2;
	coor2 = NULL;


	return 0;
}
