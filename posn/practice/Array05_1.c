#include <stdio.h>
int main(){
	int i,j ,arr[3][2] , arr2[3][2], arr3[3][2];
	for (i=0; i<=2; i++){
		for (j=0; j<=1; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	for (i=0; i<=2; i++){
		for (j=0; j<=1; j++){
			scanf("%d", &arr2[i][j]);
		}
	}
	
	for (i=0; i<=2; i++){
		for (j=0; j<=1; j++){
			arr3[i][j] = arr[i][j] + arr2[i][j];
			printf(" %d", arr3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
