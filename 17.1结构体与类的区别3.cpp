#include<iostream>
using namespace std;
struct people  //C++�����ṹ�忴��һ������ ���� 
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
	people jack;//����һ������ people���͵ĳ�Ա���� 
    jack.weight=150;
	cout<<jack.weight; 
	return 0;
}
