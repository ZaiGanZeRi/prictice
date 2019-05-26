#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
   string str1("hello worldw");
   int f=str1.rfind('w',10);//从第10位开始查找 
   //在字符串中反向查找 
    if (f!=string::npos)
    {
    	cout<<"在下标值第"<<f<<"个字符"<<endl;
	}                                             
	else
	{
		cout<<"没有找到。"<<endl;
	}
	return 0;
 } 
