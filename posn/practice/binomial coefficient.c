#include <stdio.h>

int dp[100][100];

int select(int n, int k){
	if (dp[n][k]!=0) return dp[n][k];
	if (k==0 || n==k) return 1; 
	dp[n][k] = select(n-1 , k-1) + select(n-1, k);
	return dp[n][k];
}

int main(){
	int n, k;
	scanf("%d %d",&n,&k);
	printf("%d", select(n,k));	
}
