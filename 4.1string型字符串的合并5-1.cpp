#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
    string str1="ab";
    string str2="cdefg";
  //  strncat(ch1,ch2,4);
  str1.append(str2,2,3);
    //�ú����У����������ڣ��������ǵڣ����ַ���str2��
	//��2��������ȷ��Ҫ���Ƶ��ַ�λ�ã����ӵڣ���ʼ
	//�ڣ��������Ǹ����ַ��ĸ���
    cout<<str1<<endl;

	return 0;
 } 
