#include<iostream>
using namespace std;
struct time
{
   int hour;
   int minute;
};
const int perhour=60;//ÿСʱ60���� 
time sum(time t1,time t2);//��������   ����ʱ���ܼ� 
void show(time t){cout<<t.hour<<":"<<t.minute<<endl; }
int main()
{
    time one={8,15};
    time two={6,55};
    time day=sum(one,two);
    cout<<"����ʱ���ܼƣ�";
	show(day); 
	time day3={9.35};
	cout<<"����ʱ���ܼƣ�";
	show(sum(day,day3)); 
	return 0;
}

time sum(time t1,time t2)//�������� 
{
	time total;
	total.minute=(t1.minute+t2.minute)%perhour;
	total.hour=t1.hour+t2.hour+(t1.minute+t2.minute)/perhour;
	return total;
}
