#include<iostream>
#include<cstring>
using namespace std;
class S_tring
{
	public:
		S_tring();
		S_tring(const char *const ch); 
		int getlen() const{return len;}
		char*getstr()const{return str;}//返回堆中创建的字符串的地址
		//这个函数只能读取字符串不能修改字符串 
		char &operator[](int length);//重载下标函数 　声明重载构造函数
		char &operator[](int length)const;//可操作常量对象的operator[]函数 
//		char &operator[](unsinged short int length);
//		char &operator[](unsigned short int length)const;
		S_tring(const S_tring&rs);//const对象会调用有const的函数（13行） 
        S_tring&operator=(const S_tring &s);//声明＝的重载函数 
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
		    cout<<"复制构造函数执行\n";
			len=rs.getlen();//第一行首先获取该对象的字符串成员的长度，该值返回给len 
		    str=new char[len+1];
		    for (int i=0;i<len;i++)//rs.getlen返回的len的值决定调用几次 
			{//将旧对象的成员复制给新对象，这里是可见字符复制给 
			str[i]=rs[i];	//重载下标运算符函数 //const对象会调用有const的函数（13行）
			}    
			str[len]='\0';//最后一个是结束标志 
	    }

S_tring&S_tring::operator=(const S_tring &s)//定义＝的重载函数//类外定义 
{ //返回值S_tring&要放在最前面 
	cout<<"operator=执行\n";        
    if (this==&s)//this指针指向赋值运算符＝左边的对象 
	{            //s对象是赋值运算符＝右边的对象
	             //s对象的地址与this对象的地址，它们的值判断是否是一个对象 
		return *this;//直接返回 this指针对象，按别名&方式返回这个对象。 
	 } //否则首先删除左边对象的字符串成员 
	 delete []str;//删除左边 对象的str 指向的数组 数组末尾保存字符串结束标志 可以看成条串 
     len=s.getlen();//删后要再增加一个新的字符串，长度上右边字符串长度来确定。得到长度再创建新字符串。 
     str=new char[len+1];//创建char型数组，长度为右边字符串长度加结束符 ，地址给str成员保存，通过str可找到这个数组 
     for (int i=0;i<len;i++)//循环次数为右边字符串长度 
     {
     	str[i]=s[i];//每循环一次把右边字符串中的一个字符赋给左边字符串 
	 }//S是一个对象，与下标运算符联用，会调用下标运算符函数，每循环一次调用一次。 
       //循环结束后右边的字符串所有可见字符全部拷贝到左边的数组中。 
    str[len]='\0';//最后加入字符串结束标志，这样char型数组方才变成一个字符串。 
    return *this;//完成后再将左边的字符串返回。是按引用返回左边对象的别名。是为下一次赋值做准备。 
}     

int main()
{
    S_tring s1("hello"),s2("name");
//    s1=s2;//
    s1="name";//未命名字符串赋给S1对象。要先转化“name”为对象 ，由编译器自动完成 
//这调用的是带一个参数的构造函数，将"name"为参数，传递到带一个参数的构造函数中。来完成一个无名对象的创建    
//再调用赋值运算符函数完成赋值给S1对象 ；这里无名对象有四个元素，所以operator[]const执行了4次。先n传入，再a传入，最后是e。给str。 
	S_tring s3;//创建空对象 
	s1=s2=s3;//从右侧开始将S3的值赋给S2，返回S2的别名，然后再将S2的别名赋给S1，实现了赋值符＝的级连。 执行两次。 
    cout<<"s1:"<<s1.getstr()<<endl;
    cout<<"s2:"<<s2.getstr()<<endl;
    cout<<"s3:"<<s3.getstr()<<endl;//s1、s2、s3保存的全为s3的空字符串。 
	return 0;
}


/*
#include<iostream>
using namespace std;
class A
{
public:
        A(int i,int j){x=i;y=j;}
		void set(int s1,int s2){x=s1;y=s2;}
		void print(){cout<<x<<endl;}
		void print()const{cout<<y<<endl;set(2,3);}//加入非const成员函数报错 
private:
        int x,y;		
};

int main()
{
    const A a(2,3);
    a.print();
//    a.set(1,2);
    A b(4,5);
    b.print();
    b.set(1,2);
    b.print();    
    return 0;
}
*/






















