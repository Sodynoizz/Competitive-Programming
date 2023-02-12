#include <stdio.h>
#include <stdbool.h>

bool is_prime(int x){
	if (x==1 || x==0) return false;
	
	for (int i=2; i*i<x; i++){
		if (x%i==0) return false;
	}
	return true;
}

int main(){
	int x;
	scanf("%d", &x);
	if (is_prime(x)) printf("yes");
 	else printf("no");
}
