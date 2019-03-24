#include<iostream>
#define MAXN 10000
using namespace std;
int x,y,n;
struct ditan{
	int a,
		b,
		k,
		g;
}b[MAXN];
int main() {
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i].a>>b[i].b>>b[i].k>>b[i].g;
	}
	cin>>x>>y;
	int j=-1;
	for(int i=1;i<=n;i++){
		if((x>=b[i].a)&&(x<=b[i].a+b[i].k)&&(y>=b[i].b)&&(y<=b[i].b+b[i].g)&&j<i)
			j=i;
	}
	cout<<j;
}
