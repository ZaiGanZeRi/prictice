#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
	string str1="flower me";
	string str2="go to school";
  //  str1=str2;
  str1.assign(str2,3,1);
  //��str2�дӵ�3��Ԫ�ؿ�ʼ���ĵ�1���ַ�������str1; 
	cout<<str1<<endl;
	cout<<str2<<endl;

	return 0;
 } 
