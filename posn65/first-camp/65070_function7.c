#include <stdio.h>

int gcdcmp(int a, int b){
	while (a!=b){
		if (a>b) a-=b;
		else b-=a;
	}
	return a;
}

int gcd(int a[], int b){
	int last = a[0];
	for (int i=1; i<b; i++){
		last = gcdcmp(last, a[i]);	
	}
	return last;
}

int lcmcmp(int a, int b){
	return a*b/gcdcmp(a,b);
}

int lcm(int a[], int b){
	int last = a[0];
	for (int i=1; i<b; i++){
		last = lcmcmp(last, a[i]);
	}
	return last;
}
int main(){
	int x;
	scanf("%d", &x);

	int y[x];
	
	for (int i=0; i<x;i++){
		scanf("%d", &y[i]);
	}
	
	printf("lcm = %d", lcm(y,x));
	printf("\ngcd = %d", gcd(y,x));
}
