#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1="155";
	string s2="52";
	char c[]="34";
	int i,j,k,l,m,n;
	i=s1.compare(s2);//s1对象调用成员函数compare ,参数是想比较的字符串 
	cout<<s1<<":"<<s2<<"="<<i<<endl;
    return 0;
}
