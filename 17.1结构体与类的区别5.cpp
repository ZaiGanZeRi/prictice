#include<iostream>
using namespace std;
struct people  //C++�����ṹ�忴��һ������ ���� 
{
    int age;
    double weight;//���� 
    double tall;
    char *name;
    char *native;//���� 
    bool sex;
};

void check(bool s)
{if (s==1)  cout<<"��"<<endl; else  cout<<"Ů"<<endl; }

int main()
{
	people jack=
	{
		34,
		150.5,
		175.5,
		"jack",
		"����", 
		1,
	};
	cout<<"������"<<jack.name<<endl;
	cout<<"���᣺"<<jack.native<<endl;
	cout<<"��ߣ�"<<jack.tall<<endl;
	cout<<"���أ�"<<jack.weight<<endl;
	cout<<"���䣺"<<jack.age<<endl;
	cout<<"�Ա�";check(jack.sex);
	return 0;
}
