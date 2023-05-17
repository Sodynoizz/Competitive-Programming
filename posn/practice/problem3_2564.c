#include <stdio.h>

int main(){
	unsigned long long int x;
	int y,sum=0, cnt=0;
	scanf("%llu", &x);
	while (x){
		y = x%10;
		sum += y;
		x = x/10;
		cnt++;
	}
	if (cnt>12) return 0;
	printf("%llu", sum);
}
