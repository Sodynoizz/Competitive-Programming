#include <stdio.h>
int main(){
	int i,x,y;
	printf(" Call Ascii code\n");
	printf(" Enter min code number: ");
	scanf("%d", &x);
	
	printf("\n Enter max code number: ");
	scanf("%d", &y);
	
	printf("Ascii code\t Symbol\n");
	for (i=x; i<=y; i++){
		printf("\t%d\t%c\n", i, i);
	}
	
}
