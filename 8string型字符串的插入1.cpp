#include<iostream>
#include<cstring>//#include<string.h> Cģʽ�����ͳһ�� C++ģʽ 
using namespace std;
int main()
{
    string str1="12789";
    string str2="3456";
    str1.insert(2,str2,0,4);
    //��str1��2��Ԫ�ؿ�ʼ����str2���ַ�����Χ�Ǵ�0λ�õ�4��λ�� 
    cout<<str1<<endl;
	return 0;
 } 
