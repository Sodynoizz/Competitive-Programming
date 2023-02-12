#include <stdio.h>
int main(){
	int x, i, res=1;
	scanf("%d", &x);
	
	for (i=2; i<=x;i++){
		res *= i;
	}
	
	printf("%d",res);
}
