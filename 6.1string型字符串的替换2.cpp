#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
    string str1="ab";
    char str2[]="abcdef";
//	strncpy(ch1,ch2,3);//ch2的前３个字符，替换ch1的前３个字符。
	//ch1的字符一定要大于ch2的前３　个字符。 
	str1.replace(0,1,str2,4,3);
	 cout<<str1<<endl;

	return 0;
 } 
