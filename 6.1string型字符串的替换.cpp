#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
    char ch1[10]="ab";
    char ch2[]="abcdef";
	strncpy(ch1,ch2,3);//ch2的前３个字符，替换ch1的前３个字符。
	//ch1的字符一定要大于ch2的前３　个字符。 
	 cout<<ch1<<endl;

	return 0;
 } 
