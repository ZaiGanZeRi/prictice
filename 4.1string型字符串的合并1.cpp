#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
	char ch1[]="flower me";
	char ch2[]=" go to school";
    strcat(ch1,ch2);
	cout<<ch1<<endl;
	cout<<ch2<<endl;

	return 0;
 } 
