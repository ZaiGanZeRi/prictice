#include<iostream>
#include<cstring>
using namespace std;
struct people  //C++允许将结构体看做一个数据 类型 
{//构造函数people 
	people(double t_weight,double t_tall,int t_age,string t_name,string t_native,bool t_sex);
    int age;
    double weight;//体重 
    double tall;
    string name;
    string native;//籍贯 
    bool sex;
};

void check(bool s)
{if (s==1)  cout<<"男"<<endl; else  cout<<"女"<<endl; }

int main()
{
	people jack
	(//要与People::people 下的内容对应 ，与参数对应。 
		150.5,
		175.5,
		34,
		"jack",
		"贵阳", 
		1
	);
	cout<<"姓名："<<jack.name<<endl;
	cout<<"籍贯："<<jack.native<<endl;
	cout<<"身高："<<jack.tall<<endl;
	cout<<"体重："<<jack.weight<<endl;
	cout<<"年龄："<<jack.age<<endl;
	cout<<"性别：";check(jack.sex);
	return 0;
}
people::people(double t_weight,double t_tall,int t_age,string t_name,string t_native,bool t_sex)
{

	weight=t_weight;
	tall=t_tall;
	age=t_age;
	name=t_name;	
	native=t_native;
	sex=t_sex;
}
