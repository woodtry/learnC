// ����Ϊ��Ԫ����

#include <iostream>

using namespace std;

class Complex {
	double real;
	double imaginary;

public:
	Complex(double real = 0.0, double imaginary = 0.0) {
		this->real = real;
		this->imaginary = imaginary;
	}

	Complex operator+(double real);
	friend Complex operator+(double real,
		const Complex& c);  // ��ΪҪ�õ� Complex
							// �����˽�г�Ա������Ҳ��Ϊ
							// Complex ����Ԫ

	void print();
};

Complex Complex::operator+(double real) {
	cout << "operator1" << endl;
	return Complex(this->real + real, imaginary);
}

// ����Ϊ��ͨ������������ double + Complex ����ʽ
Complex operator+(double real, const Complex& c) {

	cout << "operator2" << endl;
	return Complex(real + c.real, c.imaginary);
}

void Complex::print() {
	if (imaginary >= 0) {
		cout << real << " + " << imaginary << "i" << endl;
	}
	else {
		cout << real << " - " << -imaginary << "i" << endl;
	}
}

////������
//int main() {
//	Complex a(1, 2), b, c;
//	b = a + 5;  // �õ��ĳ�Ա����
//	b.print();
//	c = 5 + a;  // �õ�����ͨ���������� Complex ����Ԫ
//	c.print();
//	return 0;
//}