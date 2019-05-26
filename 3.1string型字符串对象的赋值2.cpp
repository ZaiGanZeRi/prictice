#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
	string str1="flower me";
	string str2="go to school";
    str1=str2;
	cout<<str1<<endl;
	cout<<str2<<endl;

	return 0;
 } 
