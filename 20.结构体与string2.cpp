#include<iostream>
#include<cstring>
using namespace std;
const string &show(const string &p)//���÷�ʽ���������������س���ֵ 
{
	cout<<p<<endl;
	return p;
}
int main()
{
	string str="hello world";
	string str1=show(str);
	cout<<str1;
	return 0;
}
