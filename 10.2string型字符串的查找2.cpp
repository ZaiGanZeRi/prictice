#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
   string str1("hello world");
   int f=str1.find('w',0);
   //��1��������Ҫ�ҵ��ַ�����2�������ӵ�0���ַ���λ�ã���ʼ���ҵ�һ�� W �ַ� 
   //���û�ҵ����� -1 
    if (f!=string::npos)
    {
    	cout<<"�ڵ�"<<f<<"���ַ�"<<endl;
	}                                             
	else
	{
		cout<<"û���ҵ���"<<endl;
	}
	return 0;
 } 
