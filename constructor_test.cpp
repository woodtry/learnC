#include "myclass.h"

////CSample������
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


////Test������
//
//int main() {
//
//	Test array1[3] = { 1, Test(1,2) };
//	// ����Ԫ�طֱ���(1),(2),(3)��ʼ��
//	Test array2[3] = { Test(2,3), Test(1,2) , 1 };
//	// ����Ԫ�طֱ���(2),(2),(1)��ʼ��
//	Test* pArray[3] = { new Test(4), new Test(1,2) };
//	//����Ԫ�طֱ���(1),(2) ��ʼ��
//	delete []* pArray;
//
//	return 0;
//}


////copy constructor������
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


////Intconstructor������
//
//int main() {
//	Complex c1(7, 8);
//	cout << c1.real << "," << c1.imag << endl;
//	Complex c2 = 12;
//	c1 = 9;//9���Զ�ת����һ����ʱComplex����
//	cout << c1.real << "," << c1.imag << endl;
//	return 0;
//}


////Destructor������
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