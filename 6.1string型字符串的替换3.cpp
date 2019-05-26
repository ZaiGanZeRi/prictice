#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
    string str1="ab";
    char str2='T';
	str1.replace(0,2,2,str2);
//第１个是需要替换字符串的位置0；；第２个是需要替换的字符个数2
//第３个参数是执行的源char型字符的字符个数，由于char型字符只有一个字符Ｔ，执行２次操作
//第４个参数是char型源字符。 
	 cout<<str1<<endl;

	return 0;
 } 
