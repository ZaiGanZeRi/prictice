#include<iostream>
#include<cmath>
#include<algorithm>
#define MAXN 80
using namespace std;
int a[MAXN][MAXN];
long long f[MAXN][MAXN][MAXN][MAXN];

long long ans[MAXN];


int main() {
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++)
			cin>>a[i][j];
	}
	for(int i=1; i<=n; i++) {
		for(int l=1; l<=m; l++) {
			for(int d=1; d<=m; d++) {
				for(int j=1; j<=m; j++) {
					if(j<l) 
						f[i][l][d][j]=max(f[i][l][d-1][j-1],f[i][l][d-1][m-d+j+1])+a[i][j]*pow(2,d);
					if(j>l) 
						f[i][l][d][j]=max(f[i][l][d-1][j+d-m-1],f[i][l][d-1][j+1])+a[i][j]*pow(2,d);
					if(j==l)f[i][l][d][j]=max(f[i][l][d-1][j-1],f[i][l][d-1][j+1])+a[i][j]*pow(2,d);

				}
			}
		}
	}
	for(int i=1; i<=n; i++) {
		for(int l=1; l<=m; l++) {
			ans[i]=max(ans[i],f[i][l][m][l]);
			
		}
		ans[MAXN]+=ans[i];
	}
	cout<<ans[MAXN]<<endl;
	return 0;
}
