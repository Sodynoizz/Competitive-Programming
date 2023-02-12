#include <stdio.h>
int main(){
	int x,y,z, k='A', l=0, cnt=0;
	scanf("%d %d %d", &x, &y, &z);
	int arr[z];
	for (int i=0; i<y;i++){
		if (l>0) { for (int i=0; i<l; i++) printf(" ");}
		for (int j=0; j<x; j++){
			if (k>'Z') k='A';
			if (j+l==z-1) {
				arr[cnt] = k;
				cnt++; 	
			}
		
			printf("%c", k);
			k++;
		}
		printf("\n");
		l++;
	}
	
	for (int i=0; i<cnt; i++) {
		printf("%c", arr[i]);
	}
}
