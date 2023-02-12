#include <stdio.h>
int main(){
	char x;
	
	scanf("%c", &x);
	if (x>=97 && x<=122){
		x-=32;
	}
	for (x; x>=65; x--){
		printf(" %c", x);
	}
}
