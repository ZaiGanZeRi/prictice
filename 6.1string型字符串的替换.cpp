#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
    char ch1[10]="ab";
    char ch2[]="abcdef";
	strncpy(ch1,ch2,3);//ch2��ǰ�����ַ����滻ch1��ǰ�����ַ���
	//ch1���ַ�һ��Ҫ����ch2��ǰ�������ַ��� 
	 cout<<ch1<<endl;

	return 0;
 } 
