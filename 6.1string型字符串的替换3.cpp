#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
    string str1="ab";
    char str2='T';
	str1.replace(0,2,2,str2);
//�ڣ�������Ҫ�滻�ַ�����λ��0�����ڣ�������Ҫ�滻���ַ�����2
//�ڣ���������ִ�е�Դchar���ַ����ַ�����������char���ַ�ֻ��һ���ַ��ԣ�ִ�У��β���
//�ڣ���������char��Դ�ַ��� 
	 cout<<str1<<endl;

	return 0;
 } 
