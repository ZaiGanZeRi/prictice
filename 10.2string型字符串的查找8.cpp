#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
   string str1("hello worldw");
   int f=str1.rfind('w',10);//�ӵ�10λ��ʼ���� 
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
