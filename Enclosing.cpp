#pragma once
#include <iostream>
using namespace std;

class CTyre {	//��̥��
private:
	int radius;		//�뾶
	int width;		//���
public:
	CTyre(int r, int w) :radius(r), width(w) { }
};

class CEngine {	//������

};

class CCar {	//�����ࡪ�������
private:
	int price;	//�۸�
	CTyre tyre;	//��Ա���󡪡���̥��
	CEngine engine;	//��Ա���󡪡�������
public:
	CCar(int p, int tr, int tw);

};

//CCar���캯��
CCar::CCar(int p, int tr, int tw) :price(p), tyre(tr, tw) {
};


////Enclosing������
//
//int main() {
//	CCar car(20000, 17, 225);
//	return 0;
//}

