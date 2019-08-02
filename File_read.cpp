#include <iostream>
#include <fstream>
#include "CStudents.h"
using namespace std;


////main函数
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
//		int nReadedBytes = inFile.gcount();//看刚才读了多少字节
//		cout << s.szName << " " << s.nScore << endl;
//	}
//	inFile.close();
//	return 0;
//}