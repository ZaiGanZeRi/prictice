#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
    char ch1[15];
    char *p,c='w';
    strcpy(ch1,"hello world");//��hello worl���Ƶ�ch1�� 
    p=strchr(ch1,c);//��ch1�ַ��������ַ� 
    if (p)
    {
    	cout<<"�ַ�"<<c<<"λ��ch1�е�"<<p-ch1<<"���ַ�"<<endl;//��ǰλ�ü�ͷλ�� 
	}
	else
	{
		cout<<"û���ҵ���";
	}
	return 0;
 } 
