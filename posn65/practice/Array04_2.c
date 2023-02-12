#include <stdio.h>
int main(){
	int i,j ,arr[3][3] , arr2[3][3];
	for (i=0; i<=2; i++){
		for (j=0; j<=2; j++){
			scanf("%d", &arr[i][j]);
			arr2[i][j] = arr[i][j] * arr[i][j];
		}
	}
	
	for (i=0; i<=2; i++){
		for (j=0; j<=2; j++){
			printf("\t%d", arr2[i][j]);
		}
		printf("\n");
	}
	
}
