#include<iostream>
#include<cstring>
#include<cstdlib>//��swab����,Ҳ������stdlib.h�ļ���c����ģʽ 
using namespace std;
int main()
{
    char ch1[15]="ofru";
    char ch2[15]="";
    swab(ch1,ch2,strlen(ch1));
	//��swab�������������ַ������� ����3������ȡ(ch1)�ǽ������ַ����� 
    cout<<ch1<<endl;
    cout<<ch2<<endl;
	return 0;
}
