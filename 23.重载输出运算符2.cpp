#include<iostream>
#include<cstring>
using namespace std;
class A
{
	public:
		A (int x,int y){rx=x;ry=y;}
//	private:  //ostream对象不是Ａ类对象，所以它只能访问公有成员 
		int rx;
		int ry;
};
ostream&operator<<(ostream&s,const A&c)
{
	s<<c.rx;
	s<<c.ry;//用cout别名s，输出Ａ（别名Ｃ）类成员rx和ry。 
	return s;//返回cout别名s //ostream对象不是Ａ类对象
}
int main()
{
	A a(3,4),b(5,6);
	cout<<a<<b;//执行输出完34后，就相当于再执行 cout<<b; (级联） 
	return 0;
}
