#include<iostream>
#include<climits>
#define N (32)
using namespace std;
int s[N][N];
void print(int i, int j){
	if(i==j){
		cout<<"A"<<i;
	}else{
		cout<<"(";
		print(i, s[i][j]);
		print(s[i][j]+1, j);
		cout<<")";
	}
}
void order(int *p, int n){
	int m[n+1][n+1], j, q;
	for(int i=0;i<=n;i++){
		m[i][i]=0;
	}
	for(int l=2;l<=n;l++){
		for(int i=1;i<=n-l+1;i++){
			j=i+l-1;
			m[i][j]=INT_MAX;
			for(int k=i;k<j;k++){
				q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				if(q<m[i][j]){
					m[i][j]=q;
					s[i][j]=k;
				}
			}
		}
	}
	print(1, n);
}
