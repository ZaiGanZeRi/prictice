#include<iostream>
using namespace std;
class A
{
	public:
		A(int x){rx=x;}
	friend ostream&operator<<(ostream&s,const A&c)
	{
		s<<c.rx;
		return s;//s ��cout ;�����a;�����b 
	}
	friend istream&operator>>(istream&s,A&c)//ȥ��const;���ġ�>> 
	{
		s>>c.rx;//��Ϊ��>>
		return s;//s��cin ,�ȸ�a���ٸ�b 
	}
	int operator++(){cout<<"++i\n";rx++;return rx;}//ǰ���Լ��޼Ӳ��� //ǰ��ִ���ں� 
	int operator++(int){cout<<"i++\n";int i=rx;rx++;return i;}//�����ԼӼ��βΣ����� //����ִ������ 
	private:
		int rx;
};

int main()
{
	A a(3),b(4);
	cout<<a<<b<<endl;
	cin>>a>>b;
	cout<<a<<b<<endl;
	return 0;
}
