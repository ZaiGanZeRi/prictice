#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
   string str1("hello world");
   int f=str1.rfind('w');
   //���ַ����з������ 
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
