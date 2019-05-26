#include<iostream>
using namespace std;
struct time
{
   int hour;
   int minute;
};
const int perhour=60;//每小时60分钟 
time sum(time t1,time t2);//函数声明   返回时间总计 
void show(time t){cout<<t.hour<<":"<<t.minute<<endl; }
int main()
{
    time one={8,15};
    time two={6,55};
    time day=sum(one,two);
    cout<<"两天时间总计：";
	show(day); 
	time day3={9.35};
	cout<<"三天时间总计：";
	show(sum(day,day3)); 
	return 0;
}

time sum(time t1,time t2)//函数定义 
{
	time total;
	total.minute=(t1.minute+t2.minute)%perhour;
	total.hour=t1.hour+t2.hour+(t1.minute+t2.minute)/perhour;
	return total;
}
