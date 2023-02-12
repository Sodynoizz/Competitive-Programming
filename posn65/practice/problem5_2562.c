#include <stdio.h>
int main(){
	int x, cnt=0;
	char k='A';
	scanf("%d", &x);
	
	for (int i=0; i<x; i++){
		for (int j=0; j<i; j++){
			if (cnt==x) return 0;
			if (k>'Z') k='A';
			printf("%c", k);
			k++;
			cnt++;
		}
		printf("\n");
	}
}
