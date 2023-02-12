#include <stdio.h>
#include <math.h>

void perimeter(int x, int y){
	double z;
	z = sqrt(x*x + y*y);
	printf("%lf", x+y+z);
}

int main(){
	int x,y;
	scanf("%d %d", &x, &y);
	perimeter(x,y);
}
