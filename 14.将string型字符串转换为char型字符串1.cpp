#include<iostream>
#include<cstring>//Ҳ������string.h�ļ���c����ģʽ 
using namespace std;
int main()
{
    string str="hellow";
    const char*ch;
    ch=str.c_str();//����c_str()���� ת����Ϊch�� 
    cout<<ch<<endl;
	return 0;
}
