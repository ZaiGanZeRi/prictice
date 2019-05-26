#include<iostream>
using namespace std;
class A
{
	public:
		A(int x){rx=x;}
	friend ostream&operator<<(ostream&s,const A&c)
	{
		s<<c.rx;
		return s;//s 是cout ;先输出a;再输出b 
	}
	friend istream&operator>>(istream&s,A&c)//去掉const;并改　>> 
	{
		s>>c.rx;//改为　>>
		return s;//s是cin ,先给a；再给b 
	}
	int operator++(){cout<<"++i\n";rx++;return rx;}//前置自加无加参数 //前置执行在后 
	int operator++(int){cout<<"i++\n";int i=rx;rx++;return i;}//后置自加加形参，参数 //后置执行在先 
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
