#include<iostream>
using namespace std;
class A
{
	public:
		A(int x){rx=x;}
	friend ostream&operator<<(ostream&s,const A&c)
	{
		s<<c.rx;
		return s;
	}
	int operator++(){cout<<"++i\n";rx++;return rx;}//ǰ���Լ��޼Ӳ��� //ǰ��ִ���ں� 
	int operator++(int){cout<<"i++\n";int i=rx;rx++;return i;}//�����ԼӼ��βΣ����� //����ִ������ 
	private:
		int rx;
};

int main()
{
	A a(3);
	cout<<++a<<a++<<endl;
	return 0;
}
