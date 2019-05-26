#include<iostream>
#include<string>
using namespace std;
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
	 if (ch=="pig") 
	 {
	 	cout<<"猪："<<ch<<endl;
		cout<<ch<<"的第1个字符是："<<ch[0]<<endl; 
	 }
	 else
	 cout<<"输入错误\n";
	return 0;
}
