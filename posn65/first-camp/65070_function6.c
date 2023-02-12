#include <stdio.h>

int fibo(int n){	
	if (n<=1) {
		return n;
	} 
	else {
		return fibo(n-1) + fibo(n-2);	
	}
}

int main(){
	int x;
	scanf("%d", &x);
	
	for (int i=1; i<=x; i++){
		printf("%d ", fibo(i));
	}
}
