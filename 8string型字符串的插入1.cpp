#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
    string str1="12789";
    string str2="3456";
    str1.insert(2,str2,0,4);
    //从str1第2个元素开始插入str2的字符，范围是从0位置到4号位置 
    cout<<str1<<endl;
	return 0;
 } 
