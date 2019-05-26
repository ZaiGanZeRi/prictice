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
	j=s2.compare(c);//重载char2与s2 比较 
	k=s1.compare(0,2,s2);
	cout<<s1<<":"<<s2<<"="<<i<<endl;
	cout<<s2<<":"<<c<<"="<<j<<endl;
	cout<<s[0]<<s[1]<<":"<<s2<<"="<<k<<endl;
    return 0;
}
