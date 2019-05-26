#include<iostream>
#include<cstring>
#include<cstdlib>//用swab函数,也可以是stdlib.h文件，c语言模式 
using namespace std;
int main()
{
    char ch1[15]="ofru";
    char ch2[15]="";
    swab(ch1,ch2,strlen(ch1));
	//用swab函数交换两个字符串内容 ；第3个参数取(ch1)是交换的字符长度 
    cout<<ch1<<endl;
    cout<<ch2<<endl;
	return 0;
}
