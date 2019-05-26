#include<iostream>
#include<cstring>
using namespace std;
class A
{
	public:
		A (int x,int y){rx=x;ry=y;}
	private:
		int rx;
		int ry;
};
int main()
{
	A a(3,4),b(5,6);
	cout<<a<<b;
	return 0;
}
