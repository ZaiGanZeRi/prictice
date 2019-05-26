#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
	string str1="flower me";
	string str2=" go to school";
//    strcat(ch1,ch2);
    str1=str1+str2;
//    strlen(str.c_str())  //c_str() 将 str 类型转换成 C 类型。
//转换后的这个数组带一个字符串结束标志，也就是C风格的字符串。 
    cout<<strlen(str1.c_str())<<endl;
	cout<<str1<<endl;
	cout<<str2<<endl;

	return 0;
 } 
