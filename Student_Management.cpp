#include<iostream>
#include<string>
using namespace std;

class CStudent 
{
private:
	string name;
	string id;//学号
	char gender;//性别，女F,男M
	int age;
public:
	void PrintInfo();
	void SetInfo(const string& name_,const string& id_,
		int age_,char gender_);
	string GetName() { return name; }
};

class CUndergraduateStudent :public CStudent 
{//本科生类，继承了CStudent
private:
	string department;//学生所属的系
public:
	void QualifiedForBaoyan() {
	//给予保研资格
		cout << "Qualified For Baoyan" << endl;
	}
	void PrintInfo() {//覆盖
		CStudent::PrintInfo();//调用基类里的PrintInfo
		cout << "Department:" << department << endl;
	}
	void SetInfo(const string& name_, const string& id_,
		int age_, char gender_, string department_) {
		CStudent::SetInfo(name_, id_, age_, gender_);//调用基类里的SetInfo
		department = department_;
	}
};

void CStudent::PrintInfo() {
	cout << "Name:" << name << endl;
	cout << "Id:" << id << endl;
	cout << "Age:" << age << endl;
	cout << "Gender:" << gender << endl;
}

void CStudent::SetInfo(const string& name_, const string& id_,
	int age_, char gender_) 
{
	name = name_;
	id = id_;
	age = age_;
	gender = gender_;
};

////主程序
//int main() 
//{
//	CUndergraduateStudent s2;
//	s2.SetInfo("Harry Potter", "123456", 19, 'M', "IOT");
//	cout << s2.GetName() << " ";
//	s2.QualifiedForBaoyan();
//	s2.PrintInfo();
//	return 0;
//}