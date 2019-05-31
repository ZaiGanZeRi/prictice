#include<bits/stdc++.h>
#define MAXN 100002
using namespace std;
int a[MAXN];
int f[MAXN];
int d[MAXN];
int b,c;
int n;
int main() {
	int k=1;
	while(~scanf("%d",&a[++n]))
		;
	for(int i=1; i<=n; i++) {
		b=0;
		c=0;
		for(int j=1; j<i; j++) {
			if(a[i]<=a[j]) {
				f[i]=max(f[i],f[j]+1);
			}
		}
	for(int j=1;j<=k;j++){
		if(d[j]==0){
		c=j;
		break ;
		}
		if(d[j]<a[i]){
			if(j==k&&c==0){
				k++;
			}
		}
		else {
			if(b==0){
				b=d[j];
				c=j;
			}
			if(d[j]<b){
				b=d[j];
				c=j;
			}
		}
	}
	d[c]=a[i];
	}
	cout<<f[n]<<endl<<k;
	return 0;
}
