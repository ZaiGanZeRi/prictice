#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
	string str1="flower me";
	string str2=" go to school";
//    strcat(ch1,ch2);
    str1=str1+str2;
//    strlen(str.c_str())  //c_str() �� str ����ת���� C ���͡�
//ת�������������һ���ַ���������־��Ҳ����C�����ַ����� 
    cout<<strlen(str1.c_str())<<endl;
	cout<<str1<<endl;
	cout<<str2<<endl;

	return 0;
 } 
