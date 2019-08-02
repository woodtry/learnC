#include <iostream>

using namespace std;

template <class T1,class T2>
class Pair {
public:
	T1 key;//关键字
	T2 value;//值
	Pair(T1 k, T2 v) :key(k), value(v) {};
	bool operator<(const Pair<T1, T2>& p)const;
};
template<class T1,class T2>
bool Pair<T1, T2>::operator<(const Pair<T1, T2>& p) const
{
	return key < p.key;
}

//main函数
int main() 
{
	Pair<string, int>student("Tom", 19);
	//实例化出一个类Pair<string,int>
	cout << student.key << " " << student.value;
	return 0;
}