#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
	char ch1[]="flower me";
	char ch2[]="go to school";
	//ch1=ch2; //���ܰ�һ����������ֵ����һ���������� 
	strcpy (ch1,ch2);// �������й�  strcpy �������÷��� 
	cout<<ch1<<endl;
	cout<<ch2<<endl;
	strcpy (ch2,"I am a student");
	cout<<ch2<<endl;
	return 0;
 } 
