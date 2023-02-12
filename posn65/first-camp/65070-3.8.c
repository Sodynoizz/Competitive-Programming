#include <stdio.h>
#include <math.h>
int main(){
	int x,i;
	scanf("%d", &x);
	if (x<0){
		for (i=1; i>=x; i--){
			printf("%.2f %.2f\n", 1.0*i, 1.0*pow(2, i));
		}
		
	} else{
		for (i=1; i<=x; i++){
			printf("%.2f %.2f\n", 1.0*i, 1.0*pow(2, i));
		}
	}
}
