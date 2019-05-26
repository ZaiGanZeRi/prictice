#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
    string str="abcdefghijklmn";
    char ch2[]="123456789";//只有9个位置 
    cout<<"源字符串:"<<ch2<<endl; 
//   memmove(ch1,ch2,10);
   int n=str.copy(ch2,10,0);
//后面两个参数都是针对调用该函数的对象str，
//因此该函数就是从str第1个字符开始连续拷贝10个字符到ch2中。   
    cout<<"拷贝了："<<n<<endl;
    cout<<"拷贝后的字符串："<<ch2<<endl; 
	return 0;
 } 
