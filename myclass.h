#pragma once
#include <iostream>
using namespace std;

class Complex {

public:
	double real, imag;
	Complex(int i) { //类型转换构造函数
		real = i; imag = 0;
		cout << "IntConstructor 1 called" << endl;
	}

	Complex(double r,double i) {
		real = r;
		imag = i;
		cout << "IntConstructor 2 called" << endl;
	}
};

class CSample {

	int x;

public:

	CSample() {
		cout<<"Contructor 1 called"<<endl; 
	}

	CSample(int n) {
		x = n;
		cout << "Contructor 2 called" << endl;
	}
};

class Test{

public:
	Test(int n) { cout << "Contructor 1 " << endl; }

	Test(int n, int m) { cout << "Contructor 2 " << endl; }

	Test() { cout << "Contructor 3 " << endl; }

};

class A
{
public:

	int v;
	A(int n) { v = n; };
	A(const A& a) { v = a.v; cout << "Copy constuctor called" << endl; }

};

class String {

private:
	char* p;
public:
	String() {
		p = new char[10];
	}
	~String()
	{
		delete []p;
	}
};

class Ctest {
public:
	~Ctest()
	{
		cout << "destructor called" << endl;
	}
};

class Demo1 {

	int id;
public:
	Demo1(int i)
	{
		id = i;
		cout << "id=" << id << "Construted" << endl;
	}
	~Demo1()
	{
		cout<<"id=" << id << "Destruted" << endl;
	}
};

