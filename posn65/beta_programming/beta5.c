#include<stdio.h>
#include<math.h>
double x,y,z;

int main(){
	scanf("%lf %lf", &x, &y);
	z = sqrt(x*x+y*y);
	printf("%lf", z);
}
