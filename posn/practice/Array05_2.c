#include <stdio.h>
int main(){
	int i,j, arr[3][2], arr2[3][2];
	
	for (i=0; i<=2; i++){
		for (j=0; j<=1; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	for (i=0; i<=2; i++){
		for (j=0; j<=1; j++){
			arr2[i][j] = arr[j][i];
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}
}
