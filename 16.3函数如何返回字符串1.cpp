#include<iostream>
#include<cstring>
using namespace std;

char *get(char *str);//返回char型，返回第一个元素的地址，参数为char型，字符串首地址 

int main()
{
	char c[10];//定义有10个元素的char型数组C ，用来保存输入的字符 。 
	char *ch;
	cout<<"请输入您的名字！"; 
	cin>>c;
	ch=get(c);//将数组C的地址做为参数传入get()函数中 ,返回地址赋给char型指针ch 
	cout<<"你的名子是："<<ch<<endl; 
	delete []ch;// []号表示删除的是数组，不加则只是删除数组的第一个元素；释放堆空间。 
	ch=get("jack");//未命名字符串jack ,付给get()函数。 
	cout<<"你的名子是："<<ch<<endl; 
	delete []ch; 	
	char *ch1="mike";//定义指针 ，mike的地址。 
	ch=get(ch1);
	cout<<"你的名子是："<<ch<<endl;	
	delete []ch; 	
    return 0;
}

char *get(char *str)//get（）函数返回字符串地址 
{
	char *p=new char[strlen(str)+1];//new一个堆 ，创建一个char型字符串数组 
	//获得str指向字符串的长度， 再加一个结束标志。 
	strcpy(p,str);//将str内容,拷贝到P指向的堆中空间中。 
	cout<<p;
	return p;//返回P指向的第一个字符串的地址 
}
