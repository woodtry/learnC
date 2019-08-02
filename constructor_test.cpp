#include "myclass.h"

////CSample主程序
//
//int main() {
//
//	CSample array1[2];
//	cout << sizeof(array1[2]) << endl;
//	cout << "step1" << endl;
//	
//	CSample array2[2] = {4,5};
//	cout << "step2" << endl;
//		
//	CSample array3[2] = {3};
//	cout << "step3" << endl;
//
//	CSample* array4 = new CSample[2];
//	delete []array4;
//
//	return 0;
//
//}


////Test主程序
//
//int main() {
//
//	Test array1[3] = { 1, Test(1,2) };
//	// 三个元素分别用(1),(2),(3)初始化
//	Test array2[3] = { Test(2,3), Test(1,2) , 1 };
//	// 三个元素分别用(2),(2),(1)初始化
//	Test* pArray[3] = { new Test(4), new Test(1,2) };
//	//两个元素分别用(1),(2) 初始化
//	delete []* pArray;
//
//	return 0;
//}


////copy constructor主程序
//
//A Func() { 
//	A b(4); 
//	return b;
//}
//int main() {
//
//	cout << Func().v << endl;
//
//	return 0;
//}


////Intconstructor主程序
//
//int main() {
//	Complex c1(7, 8);
//	cout << c1.real << "," << c1.imag << endl;
//	Complex c2 = 12;
//	c1 = 9;//9被自动转换成一个临时Complex对象
//	cout << c1.real << "," << c1.imag << endl;
//	return 0;
//}


////Destructor主程序
//Demo1 d1(1);
//void Func() {
//	static Demo1 d2(2);
//	Demo1 d3(3);
//	cout << "Func" << endl;
//}
//int main() {
//
//	//Ctest array[2];
//	//cout << "End Main" << endl;
//	Demo1 d4(4);
//	d4 = 6;
//	cout << "main" << endl;
//	{	Demo1 d5(5);	}
//	Func();
//	cout << "main ends" << endl;
//
//	return 0;
//}