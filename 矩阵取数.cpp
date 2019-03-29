#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define MAXN 80
using namespace std;
int a[MAXN][MAXN];
long long f[MAXN][MAXN];
int o[MAXN],e[MAXN];
long long ans;
int d;
int ma;
int main() {
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++)
			cin>>a[i][j];
	}
	for(int i=1; i<=n; i++) {
		o[i]=1;
		e[i]=m;
	}
	for(int i=1; i<=n; i++) {
		if(a[i][1]<+a[i][m]) {
			f[1][1]+=a[i][1]*2;
			o[i]=2;
		} else {
			f[1][m]+=a[i][m]*2;
			e[i]=m-1;
		}
	}


	for(int i=1; i<=n; i++) {

		for(d=2; d<=m; d++) {

			for(int j=o[i]; j<=e[i]; j++) {

				if(a[i][j-1]<=a[i][m+j-d]) {
					f[d][j]+=f[d-1][j-1]+a[i][j]*pow(2,d);

				} else {
					f[d][j]+=f[d-1][m+j-d]+a[i][j]*pow(2,d);

				}
			}
		}
	}
	for(int i=1; i<=m; i++) {
		ans=max(ans,f[m][i]);
		cout<<f[m][i]<<endl;
	}
	cout<<ans<<endl;
	return 0;
}
