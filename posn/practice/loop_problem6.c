#include <stdio.h>
int main(){
	int x,y,k=0, j=0;
	scanf("%d %d", &x, &y);
	
	for (int i=0; i<y;i++){
		if (k==x) k=0;
		if (j==y) return 0;
		printf("%c ", k+65); k++; j++;
	}
}
