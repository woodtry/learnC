#include<iostream>
#include<string>
using namespace std;

class CStudent 
{
private:
	string name;
	string id;//ѧ��
	char gender;//�Ա�ŮF,��M
	int age;
public:
	void PrintInfo();
	void SetInfo(const string& name_,const string& id_,
		int age_,char gender_);
	string GetName() { return name; }
};

class CUndergraduateStudent :public CStudent 
{//�������࣬�̳���CStudent
private:
	string department;//ѧ��������ϵ
public:
	void QualifiedForBaoyan() {
	//���豣���ʸ�
		cout << "Qualified For Baoyan" << endl;
	}
	void PrintInfo() {//����
		CStudent::PrintInfo();//���û������PrintInfo
		cout << "Department:" << department << endl;
	}
	void SetInfo(const string& name_, const string& id_,
		int age_, char gender_, string department_) {
		CStudent::SetInfo(name_, id_, age_, gender_);//���û������SetInfo
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

////������
//int main() 
//{
//	CUndergraduateStudent s2;
//	s2.SetInfo("Harry Potter", "123456", 19, 'M', "IOT");
//	cout << s2.GetName() << " ";
//	s2.QualifiedForBaoyan();
//	s2.PrintInfo();
//	return 0;
//}