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
	CDome& operator++();//重载前置++形式
	CDome operator++(int);//重载后置++形式
	operator int() { return n; }
	friend CDome& operator--(CDome &);//重载前置--形式
	friend CDome operator--(CDome&, int);//重载后置--形式
};

CDome& CDome::operator++()
{//重载前置++形式
	n++;
	return *this;
}

CDome CDome::operator++(int)
{//后置++
	CDome tmp(*this);//纪录修改前的对象
	n++;
	return tmp;//返回修改前的对象
}

CDome& operator--(CDome& d)
{//前置--
	d.n--;
	return d;
}

CDome operator--(CDome& d, int)
{//后置--
	CDome tmp(d);
	d.n--;
	return tmp;
}

////主程序
//int main() 
//{	
//	CDome d(5);
//	cout << (d++) << ",";//等价于d.operator++(0);
//	cout << d << ",";
//	cout << (++d) << ",";//等价于d.operator++();
//	cout << d << endl;
//	cout << (d--) << ",";//等价于operator--(d,0);
//	cout << d << ",";
//	cout << (--d) << ",";//等价于operator--(d);
//	cout << d << endl;
//	return 0;
//}