#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
    char ch1[10]="ab";
    char ch2[]="cdefg";
    strncat(ch1,ch2,4);
    //strncat有３个参数，前两个是char型字符串数组名，
	//第３个则是要提取第２个字符串头几个字符。（4） 
	//该函数作用是将第２个字符串中前n个字符连接到第１个字符串中 。 
    cout<<ch1<<endl;

	return 0;
 } 
