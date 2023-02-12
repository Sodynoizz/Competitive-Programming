#include <stdio.h>
int main(){
	float x[10], sum=0;
	int i,j;
	
	for (i=0; i<=9; i++) scanf("%f", &x[i]);
	for (j=0; j<=9; j++) sum += x[j];
	printf("\n%f", sum);
}
