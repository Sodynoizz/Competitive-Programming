#include <bits/stdc++.h>
int main(){
	int x, cnt=0;
	char c[50];
	
	gets(c);
	scanf("%d", &x);
	
	for (int i=0; i<x; i++){
		if (cnt==8) printf("\n");
		printf("%c", c[i]);
		cnt++;
	}
}
