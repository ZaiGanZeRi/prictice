#include<iostream>
#include<cstring>//��swap����,Ҳ������string.h�ļ���c����ģʽ 
#include<cstdlib>//��swab����,Ҳ������stdlib.h�ļ���c����ģʽ 
using namespace std;
int main()
{
    string str1="ofru";
    string str2="";
    str1.swap(str2);
	//��swap�������������ַ�������  
    cout<<str1<<endl;
    cout<<str2<<endl;
	return 0;
}
