#include<iostream>
using namespace std;
class S_tring
{
	public:
		S_tring();
		int getlen()const{return len;}
	private:
		int len;
		char *str;
};//指针str指向在堆中创建char型数组,就变成了一个字符串。 
S_tring::S_tring()
{
	len=0;
	str=new char[1];//在堆中开辟一块空间，
	//只保存一个字符。用str指针来指向它 
	str[0]='\0';//这一个字符用来保存字符串结束标志 ，是空字符串。 
}
int main()
{
    S_tring s;//测试这个类的对象 s
    cout<<s.getlen()<<endl;//实现这个类第一个功能计算字符串的长度 
	return 0;
}
