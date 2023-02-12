#include <stdio.h>
#include <math.h>

int main(){
	int a,n,m,k,i,j;
	scanf("%d %d %d", &n, &m, &k);
	int arr[n][m], arr2[m][k], arr3[n][k];
	
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			printf("Enter number [%d][%d] : ", i , j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\n");
	for (i=0;i<m;i++){
		for (j=0;j<k;j++){
			printf("Enter number [%d][%d] : ", i , j);
			scanf("%d", &arr2[i][j]);
		}
	}
	
	for (i=0; i<n;i++){
		for(j=0;j<k;j++){
			arr3[i][j]=0;
			for (a=0;a<m;a++){
				arr3[i][j] += arr[i][a] * arr2[a][j];
			}
		}
	}
	
	for (i=0;i<n;i++){
		for (j=0;j<k;j++){
			printf("%d\t", arr3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
