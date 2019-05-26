#include<iostream>
using namespace std;
struct A
{
//	public:
		int get(){return x;}
		int set(int i){x=i;}
	private:
		int x;
};
int main()
{
	A a;
	a.set(9);
	cout<<a.get();
	return 0;
}
