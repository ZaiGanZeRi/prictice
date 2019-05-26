#include<iostream>
using namespace std;
struct people  //C++允许将结构体看做一个数据 类型 
{
    double weight;
    double tall;
};

int main()
{
	people mike={185.2,178.1};
	people jack={65.4,165.3};
	mike=jack;//结构对象是同一类型（people类型），所以可以直接赋值。 
	cout<<mike.tall<<" "<<mike.weight<<endl;
	cout<<jack.tall<<" "<<jack.weight<<endl;
	return 0;
}

