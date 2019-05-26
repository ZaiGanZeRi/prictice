#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
   string str1("hello world");
   int f=str1.find('w',0);
   //第1个参数是要找的字符，第2个参数从第0个字符（位置）开始查找第一个 W 字符 
   //如果没找到返回 -1 
    if (f!=string::npos)
    {
    	cout<<"在第"<<f<<"个字符"<<endl;
	}                                             
	else
	{
		cout<<"没有找到。"<<endl;
	}
	return 0;
 } 
