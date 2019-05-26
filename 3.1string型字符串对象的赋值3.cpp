#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
	string str1="flower me";
	string str2="go to school";
  //  str1=str2;
  str1.assign(str2,3,1);
  //将str2中从第3个元素开始，的第1个字符，赋给str1; 
	cout<<str1<<endl;
	cout<<str2<<endl;

	return 0;
 } 
