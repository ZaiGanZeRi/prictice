#include<iostream>
#include<string>
using namespace std;
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
	 if (ch=="pig") 
	 {
	 	cout<<"��"<<ch<<endl;
		cout<<ch<<"�ĵ�1���ַ��ǣ�"<<ch[0]<<endl; 
	 }
	 else
	 cout<<"�������\n";
	return 0;
}
