#include<iostream>
#include<cstring>
using namespace std;
class S_tring
{
	public:
		S_tring();
		S_tring(const char *const ch); 
		int getlen() const{return len;}
		const char*getstr()const{return str;}//返回堆中创建的字符串的地址
		//这个函数只能读取字符串不能修改字符串 
	private:
		int len;
		char *str;
};//指针str指向在堆中创建char型数组,就变成了一个字符串。 

S_tring::S_tring()
{
	cout<<"不带参数的构造函数\n";
	len=0;
	str=new char[1];//在堆中开辟一块空间，
	//只保存一个字符。用str指针来指向它 
	str[0]='\0';//这一个字符用来保存字符串结束标志 ，是空字符串。 
}

S_tring::S_tring(const char*const ch)//ch指针指向未命名常量 ,指向地第一个字符，地址。 
{//在char型字符数组中构造一个S_tring型字符串的目的 
	cout<<"带一个参数的构造函数\n";
	len=strlen(ch);
	str=new char[len+1];
	for (int i=0;i<len;i++)
	{
		str[i]=ch[i];//将所有可见字符赋给str字符串 	 
	}
	str[len]='\0';//这样str指向的字符数组就变成了字符串
}

int main()
{
    S_tring s;//测试这个类的对象 s
    cout<<"s1:"<<s.getstr()<<"\t共"<<s.getlen()<<"字符"<<endl;//实现这个类第一个功能计算字符串的长度 
    S_tring s1("study");//未命名字符串保存在 常量文字区 第一个字符 s的内在地址 
    cout<<"s1:"<<s1.getstr()<<"\t共"<<s1.getlen()<<"字符"<<endl;
    char *temp="help me";//未命名字符串是常量，无法修改常量值 第一个字符 h的内在地址　是指针 
    S_tring s3(temp);
    cout<<"s3:"<<s3.getstr()<<"\t共"<<s3.getlen()<<"字符"<<endl; 
	return 0;
}
