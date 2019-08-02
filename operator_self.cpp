#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class CDome 
{
private:
	int n;
public:
	CDome(int i = 0) :n(i) {}
	CDome& operator++();//����ǰ��++��ʽ
	CDome operator++(int);//���غ���++��ʽ
	operator int() { return n; }
	friend CDome& operator--(CDome &);//����ǰ��--��ʽ
	friend CDome operator--(CDome&, int);//���غ���--��ʽ
};

CDome& CDome::operator++()
{//����ǰ��++��ʽ
	n++;
	return *this;
}

CDome CDome::operator++(int)
{//����++
	CDome tmp(*this);//��¼�޸�ǰ�Ķ���
	n++;
	return tmp;//�����޸�ǰ�Ķ���
}

CDome& operator--(CDome& d)
{//ǰ��--
	d.n--;
	return d;
}

CDome operator--(CDome& d, int)
{//����--
	CDome tmp(d);
	d.n--;
	return tmp;
}

////������
//int main() 
//{	
//	CDome d(5);
//	cout << (d++) << ",";//�ȼ���d.operator++(0);
//	cout << d << ",";
//	cout << (++d) << ",";//�ȼ���d.operator++();
//	cout << d << endl;
//	cout << (d--) << ",";//�ȼ���operator--(d,0);
//	cout << d << ",";
//	cout << (--d) << ",";//�ȼ���operator--(d);
//	cout << d << endl;
//	return 0;
//}