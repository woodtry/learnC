#include <stdio.h>
#include <stdlib.h>

#define NUM 5

/*
 * �ȽϺ����ı�д����
 * 1. ���Ҫ�� *elem1 ���� *elem2 ֮ǰ���򷵻�ֵ�Ǹ�����
 * 2. ��� *elem1 �� *elem2 ˭ǰ˭��Կɣ�����Ԫ����ȣ��򷵻���
 * 3. ���Ҫ�� *elem1 ���� *elem2 ֮�ᣬ�򷵻�ֵ��������
 */
int myCompare(const void* elem1, const void* elem2) {
	unsigned int* p1, * p2;
	p1 = (unsigned int*)elem1; //! �������ʹ�� cast �õ�ʵ�ʵ�����
	p2 = (unsigned int*)elem2;
	return *p1 - *p2; //����ִ�н����4 8 10 11 123 
	//����������������
	//return (*p1 % 10) - (*p2 % 10);
	//��ô����ִ�еĽ�����ǣ�10 11 123 4 8����������������Ǹ�����10��ģ���������Ĵ�С��
}

//int main() {
//	unsigned int array[NUM] = { 8, 123, 11, 10, 4 };
//	qsort(array, NUM, sizeof(unsigned int), myCompare);
//	for (int i = 0; i < NUM; i++) {
//		printf("%d ", array[i]);
//	}
//
//	return 0;
//}