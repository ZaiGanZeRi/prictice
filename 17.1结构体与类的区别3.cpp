#include<iostream>
using namespace std;
struct people  //C++允许将结构体看做一个数据 类型 
{
    int age;
    double weight;
    double tall;
    char *name;
    char *native;
    bool sex;

};
int main()
{
	people jack;//定义一个对象 people类型的成员对象 
    jack.weight=150;
	cout<<jack.weight; 
	return 0;
}
