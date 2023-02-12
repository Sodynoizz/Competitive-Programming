#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);
	
	if (x<0) {printf("Invalid input"); return 0;}
	while(x){
		printf("%d", x%10);
		x = x/10;
	}
	
	return 0;
}
