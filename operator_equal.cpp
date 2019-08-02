//"="���������
#pragma warning(disable:4996)
#include <string.h>
#include <iostream>

using namespace std;

class String {
private:
	char* str;

public:
	String() : str(NULL) {}
	String(String&);  // Ϊ�˳���Ľ�׳������Ҫ���¸��ƹ��캯����
	const char* c_str() { return str; }
	char* operator=(const char* s);
	~String();
};

String::String(String& s) {
	if (s.str) {
		str = new char[strlen(s.str) + 1];
		strcpy(str, s.str);
	}
	else {
		str = NULL;
	}
}

char* String::operator=(const char* s) {
	if (str == s) {
		return str;
	}
	if (str) {
		delete[] str;
	}
	if (s) {
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}
	else {
		str = NULL;
	}

	return str;
}

String::~String() {
	if (str) {
		delete[] str;
	}
}


////������
//int main() {
//	String s;
//	s = "Good luck";  // �൱�� s.operator=("Good luck")
//	cout << s.c_str() << endl;
//	// String s2 = "hello"; // ERROR!
//	// ����һ����ʼ����䣬Ҫ������صĹ�����������û�У����Ա����ˡ�
//	s = "ABC";
//	cout << s.c_str() << endl;
//	return 0;
//}