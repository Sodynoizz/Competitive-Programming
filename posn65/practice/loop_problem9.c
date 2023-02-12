#include <stdio.h>
int main(){
	int x;
	char y;
	scanf("%d %c", &x, &y);

	for (int i=0; i<x; i++){
		for (int j=0; j<x; j++){
			if (i==j) printf("%c", y);
			else printf("*");
		}
		printf("\n");
	}
}
