//几何形体处理程序
//功能：按面积从小到大以次输出每个几何形体的种类和面积
//输出格式为
//形体名称：面积

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

class CShape //抽象类
{//所有形状抽象出的共有属性：面积，输出信息
public:
	virtual double Area() = 0;//纯虚函数
	virtual void PrintInfo() = 0;//纯虚函数
	virtual ~CShape(){}
};

class CRectangle :public CShape 
{//矩形类
public:
	double w, h;
	virtual double Area();
	virtual void PrintInfo();
	~CRectangle()
	{

	}
};

class CCircle :public CShape
{//圆形类
public:
	int r;
	virtual double Area();
	virtual void PrintInfo();
	~CCircle()
	{

	}
};

class CTriangle :public CShape
{//三角形类
public:
	double a, b, c;
	virtual double Area();
	virtual void PrintInfo();
	~CTriangle()
	{

	}
};

double CRectangle::Area()
{
	return w * h;
}

void CRectangle::PrintInfo()
{
	cout << "Rectangle:" << Area() << endl;
}

double CCircle::Area()
{
	return 3.14 * r * r;
}

void CCircle::PrintInfo()
{
	cout << "Circle:" << Area() << endl;
}

double CTriangle::Area()
{
	double p = (a + b + c) / 2.0;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

void CTriangle::PrintInfo()
{
	cout << "CTriangle:" << Area() << endl;
}

CShape* pShapes[100];//CShape类型指针数组，指针指向不同形状的派生类对象

int main();

int MyCompare(const void* s1, const void* s2);

////主程序
//int main()
//{
//	int i; int n;
//	CRectangle* pr;
//	CCircle* pc;
//	CTriangle* pt;
//	cin >> n;//第一个键入的是形状总数
//
//	for (i = 0; i < n; i++)
//	{
//		char c;
//		cin >> c;//第二键入的是图形类别
//		switch (c)
//		{
//		case 'R':
//			pr = new CRectangle();//指向一个new出来的矩形类
//			cin >> pr->w >> pr->h;
//			pShapes[i] = pr;//指针存入pShapes数组中
//			break;
//		case 'C':
//			pc = new CCircle();//指向一个new出来的圆形类
//			cin >> pc->r;
//			pShapes[i] = pc;
//			break;
//		case 'T':
//			pt = new CTriangle();//指向一个new出来的三角形类
//			cin >> pt->a >> pt->b >> pt->c;
//			pShapes[i] = pt;
//			break;
//		}
//	}
//
//	qsort(pShapes, n, sizeof(CShape*), MyCompare);//排序
//
//	for (i = 0; i < n; i++)
//		pShapes[i]->PrintInfo();
//	return 0;
//}

int MyCompare(const void* s1, const void* s2)
{
	double a1, a2;
	CShape** p1;
	CShape** p2;
	p1 = (CShape * *)s1;
	p2 = (CShape * *)s2;
	a1 = (*p1)->Area();
	a2 = (*p2)->Area();
	if (a1 < a2)
		return -1;
	else if (a2 < a1)
		return 1;
	else
		return 0;
	return 0;
}
