#include <stdio.h>
#include <math.h>

void func(int a, int b, int c){
	float x1, x2;
	if (b*b - 4*a*c<0) {printf("No result for x1 and x2 in real number universe"); return 0;}
	x1 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
	x2 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
	printf("%f %f", x1, x2);
}
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	func(a,b,c);
	return 0;
}
