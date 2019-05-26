#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
   string str1("hello world");
   int f=str1.find_first_not_of('w',0);
   //查找第一个与W不相等的字符 
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
