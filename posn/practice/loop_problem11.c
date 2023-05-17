#include <stdio.h>
int main(){
	int x;
	char y;
	scanf("%d %c", &x, &y);

	for (int i=0; i<x; i++){
		for (int j=0; j<x; j++){
			if (i==0 || i==x-1 || j==0 || j==x-1) printf("%c", y);
			else printf("*");
		}
		printf("\n");
	}
}
