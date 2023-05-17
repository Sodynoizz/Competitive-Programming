#include <stdio.h>

int main(){
    unsigned long long int x, dp[101];
    scanf("%llu", &x);
    
    dp[0] = 1;
    dp[1] = 1;
    
    for (int i=2; i<=x-1; i++){ dp[i] = dp[i-1] + dp[i-2]; }
    printf("%lld", dp[x-1]);
    
    return 0;
}
