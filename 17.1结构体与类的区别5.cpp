#include<iostream>
using namespace std;
struct people  //C++允许将结构体看做一个数据 类型 
{
    int age;
    double weight;//体重 
    double tall;
    char *name;
    char *native;//籍贯 
    bool sex;
};

void check(bool s)
{if (s==1)  cout<<"男"<<endl; else  cout<<"女"<<endl; }

int main()
{
	people jack=
	{
		34,
		150.5,
		175.5,
		"jack",
		"贵阳", 
		1,
	};
	cout<<"姓名："<<jack.name<<endl;
	cout<<"籍贯："<<jack.native<<endl;
	cout<<"身高："<<jack.tall<<endl;
	cout<<"体重："<<jack.weight<<endl;
	cout<<"年龄："<<jack.age<<endl;
	cout<<"性别：";check(jack.sex);
	return 0;
}
