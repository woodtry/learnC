#include<iostream>
#include<string>
using namespace std;

class Base {
public:
	int n;
	int m;
	Base(int i, int j) :n(i),m(j){
		cout << "Base " << n << " constructed" << endl;
	}
	~Base()
	{
		cout << "Base " << n << " destructed" << endl;
	}


};

class Derived :public Base {
public:
	Derived(int i,int j) :Base(i,j) {
		cout << "Derived " << n << " constructed" << endl;
	}
	~Derived()
	{
		cout << "Derived " << n << " destructed" << endl;
	}
};

class MoreDerived :public Derived {
public:
	MoreDerived(int i,int j) :Derived(i,j) {
		cout << "MoreDerived " << n << " constructed" << endl;
	}
	~MoreDerived()
	{
		cout << "MoreDerived " << n << " destructed" << endl;
	}
};

////Ö÷³ÌÐò
//int main() {
//
//	MoreDerived Obj(3,4);
//	return 0;
//
//}