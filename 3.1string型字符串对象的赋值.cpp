#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
	char ch1[]="flower me";
	char ch2[]="go to school";
	//ch1=ch2; //不能把一个数组名赋值给另一个数组名； 
	strcpy (ch1,ch2);// 查阅下有关  strcpy （）的用法。 
	cout<<ch1<<endl;
	cout<<ch2<<endl;
	strcpy (ch2,"I am a student");
	cout<<ch2<<endl;
	return 0;
 } 
