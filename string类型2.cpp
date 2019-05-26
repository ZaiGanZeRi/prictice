#include<iostream>
#include<cstring>
using namespace std;
int check(char ch[]); //函数声明 
int main()
{
    string str="str类型字符串";
	char ch[]="char 类型字符串";
	cout<<str<<endl;
	cout<<ch<<endl;
	cout<<"请输入“狗”的英文单词"<<endl;
	cin>>str;
	if (str=="dog")
	{
		cout<<"狗："<<str<<endl;
		cout<<str<<"的第1个字符是："<<str[0]<<endl; 
	 } 
	 else
	 cout<<"输入 错误\n";
	 cout<<"请输入“猪”的英文单词："<<endl;
	 cin>>ch;
	 if (check(ch)==1) 
	 {
	 	cout<<"猪："<<ch<<endl;
		cout<<ch<<"的第1个字符是："<<ch[0]<<endl; 
	 }
	 else
	 cout<<"输入错误\n";
	return 0;
}
//用这个函数来循环比较两个字符数组中的每个字符，该函数来接收一个ch型字符数组的地址。 
int check(char ch[])//接收参数为ch ，返回整数int， 代表真假。 
{
	char ch1[]="pig";//ch1接收正确答案 
	bool quit=false;
	for (int i=0;i<strlen(ch1);i++)//strlen返回字符长度 
	{
		if (ch[i]!=ch1[i])
		{
			quit=true;
			break;//有一个不相等，跳出for循环 
		}
	}
	if (quit==false)
	{
		return 1;
	}
	else
	return 0;
}
