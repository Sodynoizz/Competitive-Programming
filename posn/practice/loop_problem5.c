#include <stdio.h>
int main(){
	int x;
	scanf("%d", &x);
	
	for (int i=0; i<x; i++){
		printf("%c\t", i+65);	
	}
}
