#include<iostream>
using namespace std;
struct people  //C++�����ṹ�忴��һ������ ���� 
{
    double weight;
    double tall;
};

int main()
{
	people mike={185.2,178.1};
	people jack={65.4,165.3};
	mike=jack;//�ṹ������ͬһ���ͣ�people���ͣ������Կ���ֱ�Ӹ�ֵ�� 
	cout<<mike.tall<<" "<<mike.weight<<endl;
	cout<<jack.tall<<" "<<jack.weight<<endl;
	return 0;
}

