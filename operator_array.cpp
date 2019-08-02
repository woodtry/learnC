#include <iostream>

using namespace std;

class CArray 
{
	int size;//数组元素的个数
	int *ptr;//指向动态分配的数组
public:
	CArray(int s = 0);//s代表数组元素的个数
	CArray(CArray& a);
	~CArray();

	void push_back(int v);//用于在数组尾部加一个元素v
	int length() { return size; }//返回数组元素个数

	CArray& operator=(const CArray& a);//用于数组对象间的赋值
	int& operator[](int i) 
	{//用以支持根据下标访问数组元素
	//如 n = a[i] 和 a[i] = 4;这样的语句
	//a[i]是一个函数的返回值，返回值为int是不可以被赋值的，但返回值是引用则可以
		return ptr[i];
	}
};

CArray::CArray(int s):size(s)
{
	if (s == 0)
		ptr = NULL;
	else
		ptr = new int[s];
}

CArray::CArray(CArray& a)
{//自动生成的复制构造函数是浅拷贝
	if (!a.ptr) 
	{
		ptr = NULL;
		size = 0;
		return;
	}
	ptr = new int[a.size];
	memcpy(ptr, a.ptr, sizeof(int) * a.size);
	size = a.size;
}

CArray::~CArray()
{
	if (ptr)
		delete [] ptr;
}

void CArray::push_back(int v)
{//在数组尾部添加一个元素
	if (ptr)
	{
		int* tmpPtr = new int[size + 1];//重新分配空间
		memcpy(tmpPtr, ptr, sizeof(int) * size);//拷贝原数组内容
		delete[] ptr;
		ptr = tmpPtr;
	}
	else //数组本来是空的
		ptr = new int[1];
	ptr[size++] = v;//加入新的数组元素
}

CArray& CArray::operator=(const CArray& a)
{//赋值号的作用是使“=”左边对象里存放的数组，大小和内容都和右边的对象一样
	if (ptr == a.ptr)//防止a = a这样的赋值出错
		return * this;
	if (a.ptr == NULL) 
	{//如果a里面的数组使空的
		if (ptr)
			delete [] ptr;
		ptr = NULL;
		size = 0;
		return * this;
	}
	if (size < a.size)
	{ //如果原有空间够大，就不用分配新的空间 
		if(ptr) 
			delete [] ptr;
		ptr = new int[a.size]; 
	}
	memcpy(ptr, a.ptr, sizeof(int) * a.size);
	size = a.size; 
	return *this;

}

////主程序
//int main() 
//{
//	CArray a;//开始时数组是空的
//	for (int i = 0; i < 5; ++i)
//		a.push_back(i);
//	CArray a2, a3;//a2是一个对象，而不是数组，所以需要重载[]
//	a2 = a;
//	for (int i = 0; i < a.length(); ++i)
//		cout << a2[i] << " ";
//	a2 = a3;//a2是空的
//	for (int j = 0; j < a2.length(); ++j) //a2.lenth()返回0
//		cout << a2[j] << " ";
//	cout << endl;
//	a[3] = 100;
//	CArray a4(a);
//	for (int i = 0; i < a4.length(); ++i) 
//		cout << a4[i] << " ";
//	return 0;
//}