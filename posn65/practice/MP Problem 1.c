#include <stdio.h>

void swap(int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;	
}

int main(){
	int a,b;
	printf("Enter A :");
	scanf("%d", &a);
	
	printf("Enter B :");
	scanf("%d", &b);
	
	swap(&a, &b);
	printf("A = %d, B = %d", a,b);
}
