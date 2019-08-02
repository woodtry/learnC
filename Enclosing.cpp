#pragma once
#include <iostream>
using namespace std;

class CTyre {	//轮胎类
private:
	int radius;		//半径
	int width;		//宽度
public:
	CTyre(int r, int w) :radius(r), width(w) { }
};

class CEngine {	//引擎类

};

class CCar {	//汽车类——封闭类
private:
	int price;	//价格
	CTyre tyre;	//成员对象——轮胎类
	CEngine engine;	//成员对象——引擎类
public:
	CCar(int p, int tr, int tw);

};

//CCar构造函数
CCar::CCar(int p, int tr, int tw) :price(p), tyre(tr, tw) {
};


////Enclosing主函数
//
//int main() {
//	CCar car(20000, 17, 225);
//	return 0;
//}

