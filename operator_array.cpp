#include <iostream>

using namespace std;

class CArray 
{
	int size;//����Ԫ�صĸ���
	int *ptr;//ָ��̬���������
public:
	CArray(int s = 0);//s��������Ԫ�صĸ���
	CArray(CArray& a);
	~CArray();

	void push_back(int v);//����������β����һ��Ԫ��v
	int length() { return size; }//��������Ԫ�ظ���

	CArray& operator=(const CArray& a);//������������ĸ�ֵ
	int& operator[](int i) 
	{//����֧�ָ����±��������Ԫ��
	//�� n = a[i] �� a[i] = 4;���������
	//a[i]��һ�������ķ���ֵ������ֵΪint�ǲ����Ա���ֵ�ģ�������ֵ�����������
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
{//�Զ����ɵĸ��ƹ��캯����ǳ����
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
{//������β�����һ��Ԫ��
	if (ptr)
	{
		int* tmpPtr = new int[size + 1];//���·���ռ�
		memcpy(tmpPtr, ptr, sizeof(int) * size);//����ԭ��������
		delete[] ptr;
		ptr = tmpPtr;
	}
	else //���鱾���ǿյ�
		ptr = new int[1];
	ptr[size++] = v;//�����µ�����Ԫ��
}

CArray& CArray::operator=(const CArray& a)
{//��ֵ�ŵ�������ʹ��=����߶������ŵ����飬��С�����ݶ����ұߵĶ���һ��
	if (ptr == a.ptr)//��ֹa = a�����ĸ�ֵ����
		return * this;
	if (a.ptr == NULL) 
	{//���a���������ʹ�յ�
		if (ptr)
			delete [] ptr;
		ptr = NULL;
		size = 0;
		return * this;
	}
	if (size < a.size)
	{ //���ԭ�пռ乻�󣬾Ͳ��÷����µĿռ� 
		if(ptr) 
			delete [] ptr;
		ptr = new int[a.size]; 
	}
	memcpy(ptr, a.ptr, sizeof(int) * a.size);
	size = a.size; 
	return *this;

}

////������
//int main() 
//{
//	CArray a;//��ʼʱ�����ǿյ�
//	for (int i = 0; i < 5; ++i)
//		a.push_back(i);
//	CArray a2, a3;//a2��һ�����󣬶��������飬������Ҫ����[]
//	a2 = a;
//	for (int i = 0; i < a.length(); ++i)
//		cout << a2[i] << " ";
//	a2 = a3;//a2�ǿյ�
//	for (int j = 0; j < a2.length(); ++j) //a2.lenth()����0
//		cout << a2[j] << " ";
//	cout << endl;
//	a[3] = 100;
//	CArray a4(a);
//	for (int i = 0; i < a4.length(); ++i) 
//		cout << a4[i] << " ";
//	return 0;
//}