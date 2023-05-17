#include <stdio.h>

double sum;

double func(double x, double n){
	if (n==1){return x;}
	double y = func(x, n-2);
	y *=  -1.0 * x * x;
	y /= n * (n-1);
	sum += y;	
	return y;
}

int main(){
	double x;
	scanf("%lf", &x);
	x = func(x,7);
	printf("%lf", sum);
}
