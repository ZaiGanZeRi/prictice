#include<iostream>
#include<cstring>
using namespace std;
void show(const string str[],int n);//声明函数 

int main()
{
	const int length=5;
	string str[length];
//  char  str1[5][100]; //必须将数组定义得足够大，以避免数组越界。
	for (int i=0;i<length;i++)
	{
		cout<<i+1<<":";
		cin>>str[i];
	}
	show(str,length);//传数组地址和长度 
	return 0;
}
void show(const string str[],int n)//字义函数 
{
	for (int i=0;i<n;i++)
	{
		cout<<i+1<<":"<<str[i]<<endl;
	}
}
