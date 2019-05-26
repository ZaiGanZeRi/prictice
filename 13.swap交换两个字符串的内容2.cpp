#include<iostream>
#include<cstring>//用swap函数,也可以是string.h文件，c语言模式 
#include<cstdlib>//用swab函数,也可以是stdlib.h文件，c语言模式 
using namespace std;
int main()
{
    string str1="ofru";
    string str2="";
    str1.swap(str2);
	//用swap函数交换两个字符串内容  
    cout<<str1<<endl;
    cout<<str2<<endl;
	return 0;
}
