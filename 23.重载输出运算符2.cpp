#include<iostream>
#include<cstring>
using namespace std;
class A
{
	public:
		A (int x,int y){rx=x;ry=y;}
//	private:  //ostream�����ǣ������������ֻ�ܷ��ʹ��г�Ա 
		int rx;
		int ry;
};
ostream&operator<<(ostream&s,const A&c)
{
	s<<c.rx;
	s<<c.ry;//��cout����s��������������ã����Աrx��ry�� 
	return s;//����cout����s //ostream�����ǣ������
}
int main()
{
	A a(3,4),b(5,6);
	cout<<a<<b;//ִ�������34�󣬾��൱����ִ�� cout<<b; (������ 
	return 0;
}
