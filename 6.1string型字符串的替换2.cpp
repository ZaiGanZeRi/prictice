#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
    string str1="ab";
    char str2[]="abcdef";
//	strncpy(ch1,ch2,3);//ch2��ǰ�����ַ����滻ch1��ǰ�����ַ���
	//ch1���ַ�һ��Ҫ����ch2��ǰ�������ַ��� 
	str1.replace(0,1,str2,4,3);
	 cout<<str1<<endl;

	return 0;
 } 
