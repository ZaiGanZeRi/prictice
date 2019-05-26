#include<iostream>
#include<cstring>//#include<string.h> C模式；最好统一用 C++模式 
using namespace std;
int main()
{
    string s("give me");//定义string类字符串s,并且在构造函数时初始化值为give me
    cout<<"原始字符串为："<<s<<endl;
	s.erase(2,2);//第1个参数是从哪个位置开始删除，第2个参数是删除几个元素。 
	cout<<"现在字符串为："<<s<<endl; 
	s.erase(2);//从第2个位置开始删除后面所有元素。 
	cout<<"从下标为2的元素开始删除后面所有后s："<<s<<endl;
	s.erase();//最后一次重载 没有加参数，默认值为0，从0往后的字符全删除了，清空字符串 
	cout<<"清空s："<<s<<endl;	
	return 0;
 } 
