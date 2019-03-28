#include<iostream>
#include<cmath>
using namespace std;
int d;
int N;
int step;
void hanoi(int n,char a,char b,char c) {
	if(n%2==0) {
		d++;
		hanoi(n/2,a,c,b);
	} else {
		if(n!=1) {

			if(n%3==0)
				hanoi(1,c,a,b);
			if(n%3==1)
				hanoi(3,b,c,a);
			if(n%3==2)
				hanoi(3,c,a,b);
		} else cout<<++step<<". "<<"move "<<++d<<" from "<<a<<" to "<<c<<endl;
	}
}
int main() {
	cin>>N;
	for(int i=1; i<=pow(2,N)-1; i++) {
		d=0;
		if(N%2)
			hanoi(i,'A','B','C');
		else hanoi(i,'A','C','B');
	}
	return 0;
}
