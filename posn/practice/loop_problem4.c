#include <stdio.h>
int main(){
	int x,y;
	scanf("%d %d", &x, &y);
	for (int i=x+1; i<=y; i++) printf("%c\t", i+64);
}
