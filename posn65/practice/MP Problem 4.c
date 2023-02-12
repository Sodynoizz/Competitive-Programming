#include <stdio.h>

int factorial(x){
	if (x>1){
		return x*factorial(x-1);	
	}
}
int main(){
	int x,y;
	scanf("%d", &x);
	
	y = factorial(x);
	printf("%d! = %d", x, y);
}
