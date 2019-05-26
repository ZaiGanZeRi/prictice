#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
   char ch1[15]="abcdefghijklmn";
   char ch2[]="1234567890";
   cout<<"源字符串:"<<ch1<<endl; 
   memmove(ch1,ch2,10);
   cout<<"拷贝后的字符串："<<ch1<<endl; 
	return 0;
 } 
