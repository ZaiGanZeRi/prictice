#include<iostream>
#include<cstring>//也可以是string.h文件，c语言模式 
using namespace std;
int main()
{
    string str="hellow";
    const char*ch;
    ch=str.c_str();//调用c_str()函数 转换成为ch型 
    cout<<ch<<endl;
	return 0;
}
