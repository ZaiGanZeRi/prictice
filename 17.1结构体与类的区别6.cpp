#include<iostream>
#include<cstring>
using namespace std;
struct people  //C++�����ṹ�忴��һ������ ���� 
{//���캯��people 
	people(double t_weight,double t_tall,int t_age,string t_name,string t_native,bool t_sex);
    int age;
    double weight;//���� 
    double tall;
    string name;
    string native;//���� 
    bool sex;
};

void check(bool s)
{if (s==1)  cout<<"��"<<endl; else  cout<<"Ů"<<endl; }

int main()
{
	people jack
	(//Ҫ��People::people �µ����ݶ�Ӧ ���������Ӧ�� 
		150.5,
		175.5,
		34,
		"jack",
		"����", 
		1
	);
	cout<<"������"<<jack.name<<endl;
	cout<<"���᣺"<<jack.native<<endl;
	cout<<"��ߣ�"<<jack.tall<<endl;
	cout<<"���أ�"<<jack.weight<<endl;
	cout<<"���䣺"<<jack.age<<endl;
	cout<<"�Ա�";check(jack.sex);
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
