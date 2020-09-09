#include "matrixChainMultiplication.h"
int main(){
	int n;
	cout<<"Please enter the number of matrix: ";
	cin>>n;
	int p[n+1];
	cout<<"Please enter the chain("<<n+1<<"): ";
	for(int i=0;i<=n;i++){
		cin>>p[i];
	}
	order(p, n);
	return 0;
}
