#include<iostream>
#include<cstring>
using namespace std;
int check(char ch[]); //�������� 
int main()
{
    string str="str�����ַ���";
	char ch[]="char �����ַ���";
	cout<<str<<endl;
	cout<<ch<<endl;
	cout<<"�����롰������Ӣ�ĵ���"<<endl;
	cin>>str;
	if (str=="dog")
	{
		cout<<"����"<<str<<endl;
		cout<<str<<"�ĵ�1���ַ��ǣ�"<<str[0]<<endl; 
	 } 
	 else
	 cout<<"���� ����\n";
	 cout<<"�����롰����Ӣ�ĵ��ʣ�"<<endl;
	 cin>>ch;
	 if (check(ch)==1) 
	 {
	 	cout<<"��"<<ch<<endl;
		cout<<ch<<"�ĵ�1���ַ��ǣ�"<<ch[0]<<endl; 
	 }
	 else
	 cout<<"�������\n";
	return 0;
}
//�����������ѭ���Ƚ������ַ������е�ÿ���ַ����ú���������һ��ch���ַ�����ĵ�ַ�� 
int check(char ch[])//���ղ���Ϊch ����������int�� ������١� 
{
	char ch1[]="pig";//ch1������ȷ�� 
	bool quit=false;
	for (int i=0;i<strlen(ch1);i++)//strlen�����ַ����� 
	{
		if (ch[i]!=ch1[i])
		{
			quit=true;
			break;//��һ������ȣ�����forѭ�� 
		}
	}
	if (quit==false)
	{
		return 1;
	}
	else
	return 0;
}
