#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
   char ch1[15]="abcdefghijklmn";
   char ch2[]="1234567890";
   cout<<"Դ�ַ���:"<<ch1<<endl; 
   memmove(ch1,ch2,10);
   cout<<"��������ַ�����"<<ch1<<endl; 
	return 0;
 } 
