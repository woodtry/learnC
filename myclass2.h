#pragma once
#include <iostream>
using namespace std;

class CRectangle
{
private:
	int w, h;
	static int nTotalArea;//��̬��Ա����
	static int nTotalNumber;
public:
	CRectangle(int w_, int h_);//���캯��
	CRectangle(CRectangle& r);//���ƹ��캯��
	~CRectangle();//��������
	static void PrintTotal();//��̬��Ա����
};

//���캯��
CRectangle::CRectangle(int w_, int h_)
{
	w = w_;
	h = h_;
	nTotalNumber++;
	nTotalArea += w * h;
}

//���ƹ��캯��
CRectangle::CRectangle(CRectangle & r)
{
	w = r.w;
	h = r.h;
	nTotalNumber++;
	nTotalArea += w * h;
}

//��������
inline CRectangle::~CRectangle()
{
	nTotalNumber--;
	nTotalArea -= w * h;
}

//��ӡ����-��̬��Ա
inline void CRectangle::PrintTotal()
{
	cout << nTotalNumber << "," << nTotalArea << endl;
}

//��ʼ������
int CRectangle::nTotalNumber = 0;
int CRectangle::nTotalArea = 0;
