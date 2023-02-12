#include <stdio.h>
#include <stdbool.h>

bool check(int x){
	int j;
	if (x==0 || x==1) return false;
	for (j=2; j<= x/2; j++){
		if (x%j==0) return false;
	}
	
	return true;
}

int main(){
	int x, i, count = 0;
	scanf("%d", &x);
	for (i=1; i<=x; i++){
		if (check(i)){
			count += 1;
			printf(" %d", i);
		}
	}
	
	printf("\nTotal :%d", count);
	return 0;
}
