#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
    char ch1[10]="ab";
    char ch2[]="cdefg";
    strncat(ch1,ch2,4);
    //strncat�У���������ǰ������char���ַ�����������
	//�ڣ�������Ҫ��ȡ�ڣ����ַ���ͷ�����ַ�����4�� 
	//�ú��������ǽ��ڣ����ַ�����ǰn���ַ����ӵ��ڣ����ַ����� �� 
    cout<<ch1<<endl;

	return 0;
 } 
