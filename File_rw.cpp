#include <iostream>
#include <fstream>
#include "CStudents.h"
using namespace std;

////main函数
//int main() 
//{
//	CStudents s;
//	fstream iofile("B:\\VS2019\\Users\\srcfile\\students.dat", ios::in |ios::out| ios::binary);
//	if (!iofile) 
//	{
//		cout << "error";
//		return 0;
//	}
//	iofile.seekp(1 * sizeof(s), ios::beg);//定位写指针到第三个纪录
//	iofile.write("Jack", strlen("Jack") + 1);
//	iofile.seekg(0, ios::beg);//定位读指针到开头
//	while (iofile.read((char*)& s, sizeof(s)))
//		cout << s.szName << " " << s.nScore << endl;
//	iofile.close();
//	return 0;
//}