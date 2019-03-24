#include<cstdio>
using namespace std;
const int MAXN=10001;
int x[MAXN],y[MAXN],d[MAXN];
int c[MAXN];
int *a[MAXN];

int main() {
	int M,N,K;
	scanf("%d%d%d",&M,&N,&K);
	for(int i=1; i<=K; i++) {
		scanf("%d%d%d",x+i,y+i,d+i);
		c[y[i]]++;
	}
	for(int i=1; i<=N; i++) {
		a[i]= new int[c[i]];
	}
	for(int i=1; i<=K; i++) {
		*a[y[i]]=d[i];
		a[y[i]]++;
	}
	for(int i=1; i<=N; i++) {
		a[i]-=c[i];
		for(int j=1; j<=c[i]; j++) {
			printf("%d ",*a[i]);
			a[i]++;
		}
	}
	return 0;

}
