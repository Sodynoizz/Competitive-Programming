#include <stdio.h>

int res(int x){
	return x*x+1;
}

int main(){
	int x;
	scanf("%d", &x);
	printf("%d", res(x));
}
