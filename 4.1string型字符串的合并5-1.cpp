#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
    string str1="ab";
    string str2="cdefg";
  //  strncat(ch1,ch2,4);
  str1.append(str2,2,3);
    //该函数有３个参数，第１个参数是第２个字符串str2，
	//第2个参数是确定要复制的字符位置，即从第２开始
	//第３个参数是复制字符的个数
    cout<<str1<<endl;

	return 0;
 } 
