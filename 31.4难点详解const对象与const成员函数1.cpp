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
		char &operator[](int length);//重载下标函数 　声明重载构造函数
		char &operator[](int length)const;//可操作常量对象的operator[]函数 
//		char &operator[](unsinged short int length);
//		char &operator[](unsigned short int length)const;
		S_tring(const S_tring&rs);//const对象会调用有const的函数（13行） 
	private:
		int len;
	//unsigned short int length; 
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

char &S_tring::operator[](int length)//定义构造函数 可用（unsigned short int length)无符号长整型，避免为负数 
		{//按引用返回 字符原始值 
		cout<<"operator[]执行\n";
			if (length>len&&length<0)//下标值与实际长度大小比较并不能为负数
			{
				return str[len-1];
			 } //引用，以别名方式返回字符，可以修改
			 else
			 return str[length];
		}

char &S_tring::operator[](int length)const//定义构造函数 
//char &S_tring::operator[](unsigned short ing length)const
		{//按引用返回 字符原始值 
		cout<<"operator[]const执行\n";
			if (length>len)//下标值与实际长度大小比较
			{
				return str[len-1];
			 } //引用，以别名方式返回字符，可以修改
			 else
			 return str[length];
		}

S_tring::S_tring(const S_tring&rs)//const对象会调用有const的函数（13行） 
		{
			len=rs.getlen();//第一行首先获取该对象的字符串成员的长度，该值返回给len 
		    str=new char[len+1];
		    for (int i=0;i<len;i++)//rs.getlen返回的len的值决定调用几次 
			{//将旧对象的成员复制给新对象，这里是可见字符复制给 
			str[i]=rs[i];	//重载下标运算符函数 //const对象会调用有const的函数（13行）
			}    
			str[len]='\0';//最后一个是结束标志 
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
    cin>>s3[999];//验证s3长度是否变长 修改最后一个字符
    cout<<"s3:"<<s3.getstr()<<"\t共"<<s3.getlen()<<"字符"<<endl; 
    cout<<"s3[999]:"<<s3[999]<<endl;//返回最后一个字符
	S_tring s4=s3; //用复制构造函数实现字符串初始化 
    cout<<"s4[999]:"<<s4[999]<<endl;//返回最后一个字符	
	return 0;
}
