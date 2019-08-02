#include <iostream>

using namespace std;

template <class T>
T Max(T a[], int size)//size是数组元素个数
{
	T tmpMax = a[0];
	for (int i = 1; i < size; ++i)
		if (tmpMax < a[i])
	tmpMax = a[i];
	cout << "Max="<< tmpMax << endl;
	return tmpMax;
}

template<class T>
T Max(T a, T b) 
{
	cout << "Template Max1" << endl;
	return 0;
}

template<class T, class T2>
T Max(T a, T2 b)
{
	cout << "Template Max2" << endl;
	return 0;
}

double Max(double a, double b) 
{
	cout << "MyMax" << endl;
	return 0;
}

////main 函数
//int main()
//{
//	int a[] = { 1,2,3 };
//	int i = 4, j = 5;
//	Max(1.2, 3.4);
//	Max(i, j);
//	Max(1.2, 3);
//	Max(a, 2);
//	return 0;
//}