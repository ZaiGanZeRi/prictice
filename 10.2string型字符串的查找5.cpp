#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
   string str1("hello worldw");
   int f=str1.find_last_of('w');//�����ṩλ�� 
   //���ַ�����ĩβ����W��ȵ��ַ� 
    if (f!=string::npos)
    {
    	cout<<"���±�ֵ��"<<f<<"���ַ�"<<endl;
	}                                             
	else
	{
		cout<<"û���ҵ���"<<endl;
	}
	return 0;
 } 
