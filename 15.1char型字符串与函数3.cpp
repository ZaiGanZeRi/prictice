#include<iostream>
#include<cstring>//Ҳ������string.h�ļ���c����ģʽ 
int get (const char *p);//����get���� 
//int get (const char []);
//������ͼ�޸�chonst char��ָ��ָ���ԭʼ�ַ�������ô��������������� 
using namespace std;
int main()
{
    char ch[15]="hellow world";//���������ʽ�������ַ��� ��ÿ���ַ��ǿ��Ըı�� 
    char *p="very well";//��ָ�����ʽָ���ַ���
//δ�����ַ�������������ֳ�������Pָ���ÿ���ַ����ǲ��ɸı䣬�о��� 
    ch[0]='s';//���Ըı��һ���ַ������ᱨ���о��档 
//	*(p+0)='s'; //�����Ըı��һ���ַ�������
	cout<<*(p+0)<<endl;
    int a=get(ch); 
    int b=get(p);
    cout<<ch<<"����"<<a<<"���ַ�"<<endl;
	cout<<p<<"����"<<b<<"���ַ�"<<endl; 
	return 0;
}

int get(const char *p)
//int get(const char p[])
{   //ѭ����ֹ����Ϊ*p����0��Ҳ���ǵ�pָ��ָ���ַ���������־��ѭ��ֹͣ�� 
	int count=0;// ����ѭ�������� 
	while (*p)//��0ʱ��ֹ 
	{
		count++;
		p++;//pָ��ָ����һ���ַ� 
	}//Pָ��ָ�����һ���ַ���Ҳ�����ַ���������־ʱ��count�б�������ַ�������
	return count; 
}

