#include<iostream>
#include<cstring>
using namespace std;

char *get(char *str);//����char�ͣ����ص�һ��Ԫ�صĵ�ַ������Ϊchar�ͣ��ַ����׵�ַ 

int main()
{
	char c[10];//������10��Ԫ�ص�char������C ����������������ַ� �� 
	char *ch;
	cout<<"�������������֣�"; 
	cin>>c;
	ch=get(c);//������C�ĵ�ַ��Ϊ��������get()������ ,���ص�ַ����char��ָ��ch 
	cout<<"��������ǣ�"<<ch<<endl; 
	delete []ch;// []�ű�ʾɾ���������飬������ֻ��ɾ������ĵ�һ��Ԫ�أ��ͷŶѿռ䡣 
    return 0;
}

char *get(char *str)//get�������������ַ�����ַ 
{
	char *p=new char[strlen(str)+1];//newһ���� ������һ��char���ַ������� 
	//���strָ���ַ����ĳ��ȣ� �ټ�һ��������־�� 
	strcpy(p,str);//��str����,������Pָ��Ķ��пռ��С� 
	cout<<p;
	return p;//����Pָ��ĵ�һ���ַ����ĵ�ַ 
}
