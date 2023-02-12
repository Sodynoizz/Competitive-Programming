#include <stdio.h>
int main(){
	int x, y, i;
	scanf("%d %d", &x, &y);
	
	for (i=1; i<=1000;i++){
		if (x%i==0 && y%i==0){
			printf(" %d", i);
		}
	}
}
