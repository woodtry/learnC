#include <iostream>
#include <fstream>
#include "CStudents.h"
using namespace std;


////main����
//int main()
//{
//	CStudents s;
//	ifstream inFile("B:\\VS2019\\Users\\srcfile\\students.dat", ios::in | ios::binary);
//
//	if (!inFile) 
//	{
//		cout << "error" << endl;
//		return 0;
//	}
//	while (inFile.read((char*)& s,sizeof(s)))
//	{
//		int nReadedBytes = inFile.gcount();//���ղŶ��˶����ֽ�
//		cout << s.szName << " " << s.nScore << endl;
//	}
//	inFile.close();
//	return 0;
//}