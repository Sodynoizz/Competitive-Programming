#include <stdio.h>
int main(){
	int n,m, sum=0;
	scanf("%d", &n);
	scanf("%d", &m);
	
	if (n>1000 || m>1000) return 0;
	for (int i=n+1; i<=m-1; i++){ if ((i%2==0) || (i%3==0) ) sum+=i; }
	printf("%d", sum);
}
