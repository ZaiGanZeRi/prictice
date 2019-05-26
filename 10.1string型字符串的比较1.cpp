#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
    char ch1[15];
    char *p,c='w';
    strcpy(ch1,"hello world");//将hello worl复制到ch1中 
    p=strchr(ch1,c);//中ch1字符串查找字符 
    if (p)
    {
    	cout<<"字符"<<c<<"位于ch1中第"<<p-ch1<<"个字符"<<endl;//当前位置减头位置 
	}
	else
	{
		cout<<"没有找到。";
	}
	return 0;
 } 
