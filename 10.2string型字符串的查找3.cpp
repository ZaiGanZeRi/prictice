#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
   string str1("hello world");
   int f=str1.find_first_not_of('w',0);
   //���ҵ�һ����W����ȵ��ַ� 
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
