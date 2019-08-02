#pragma once
#include <iostream>
using namespace std;

class CRectangle
{
private:
	int w, h;
	static int nTotalArea;//静态成员变量
	static int nTotalNumber;
public:
	CRectangle(int w_, int h_);//构造函数
	CRectangle(CRectangle& r);//复制构造函数
	~CRectangle();//析构函数
	static void PrintTotal();//静态成员函数
};

//构造函数
CRectangle::CRectangle(int w_, int h_)
{
	w = w_;
	h = h_;
	nTotalNumber++;
	nTotalArea += w * h;
}

//复制构造函数
CRectangle::CRectangle(CRectangle & r)
{
	w = r.w;
	h = r.h;
	nTotalNumber++;
	nTotalArea += w * h;
}

//析构函数
inline CRectangle::~CRectangle()
{
	nTotalNumber--;
	nTotalArea -= w * h;
}

//打印内容-静态成员
inline void CRectangle::PrintTotal()
{
	cout << nTotalNumber << "," << nTotalArea << endl;
}

//初始化定义
int CRectangle::nTotalNumber = 0;
int CRectangle::nTotalArea = 0;
