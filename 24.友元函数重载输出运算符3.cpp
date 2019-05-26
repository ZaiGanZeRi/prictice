#include<iostream>
#include<cstring>
using namespace std;
class A
{
	public: 
		A (int x,int y){rx=x;ry=y;}
	friend ostream&operator<<(ostream&s,const A&c)
   {//ostream对象不是Ａ类对象，所以它变成友元函数
        s<<c.rx;
        s<<c.ry;//用cout别名s，输出Ａ（别名Ｃ）类成员rx和ry。 
        return s;//返回cout别名s //ostream对象不是Ａ类对象
   } 
	private:  
		int rx;
		int ry;
};

int main()
{
	A a(3,4),b(5,6);
	cout<<a<<b;//执行输出完34后，就相当于再执行 cout<<b; (级联） 
	return 0;
}
