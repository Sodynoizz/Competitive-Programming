#include <stdio.h>
int main(){
	int x,y, k='A', l='B';
	scanf("%d %d", &x, &y);
	if (x==1){
		for (int i=1; i<=y; i++) {
			if (k>'D') k='A';
			if (i==y) printf("%c", k); 
			k++;
		}
	}
	
	else if (x==2){
		for (int i=1; i<=y; i++) {
			if (l>'D') l='A';
			if (i==y) printf("%c", l);
			l++;
		}
	}
}
