#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1="155";
	string s2="52";
	char c[]="34";
	int i,j,k,l,m,n;
	i=s1.compare(s2);//s1������ó�Ա����compare ,��������Ƚϵ��ַ��� 
	j=s2.compare(c);//����char2��s2 �Ƚ� 
	cout<<s1<<":"<<s2<<"="<<i<<endl;
	cout<<s2<<":"<<c<<"="<<j<<endl;
    return 0;
}
