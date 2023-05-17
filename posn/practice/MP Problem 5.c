#include <stdio.h>

int main(){
	int x,y,i;
	scanf("%d", &x);
	int dp[x];
	
	dp[0] = 0; dp[1] = 1;
	
	for (i=0; i<=1;i++){
		printf("%d ", dp[i]);
	}
	
	for (i=2; i<=x-1; i++){
		dp[i] = dp[i-1] + dp[i-2];
		printf("%d ", dp[i]);
	}
	
}
