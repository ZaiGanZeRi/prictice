#include<iostream>
#include<cstring>//也可以是string.h文件，c语言模式 
int get (const char *p);//声明get函数 
//int get (const char []);
//假如试图修改chonst char型指针指向的原始字符串，那么编译器将报告错误。 
using namespace std;
int main()
{
    char ch[15]="hellow world";//以数组的形式来保存字符串 ，每个字符是可以改变的 
    char *p="very well";//以指针的形式指向字符串
//未命名字符串，存放在文字常量区，P指向的每个字符都是不可改变，有警告 
    int a=get(ch); 
    int b=get(p);
    cout<<ch<<"共有"<<a<<"个字符"<<endl;
	cout<<p<<"共有"<<b<<"个字符"<<endl; 
	return 0;
}

int get(const char *p)
//int get(const char p[])
{   //循环终止条件为*p等于0，也就是当p指针指向字符串结束标志后循环停止。 
	int count=0;// 保存循环的条件 
	while (*p)//到0时终止 
	{
		count++;
		p++;//p指针指向下一个字符 
	}//P指针指向最后一个字符，也就是字符串结束标志时，count中保存的是字符串长度
	return count; 
}

