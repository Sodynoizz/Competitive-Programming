#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	int max = -1;
	
	for (int i=0; i<n;i++){
		scanf("%d", &arr[i]);
		if (max<arr[i]) max = arr[i];
	}
	
	for (int i=max; i>=1;i--){
		for (int j=0; j<n;j++){
			if (i>arr[j]){
				for (int k=0; k<2*(arr[j]); k++){
					printf(" ");
				}
			}
			else {
				for (int k=0; k<i-1;k++){
					printf(" ");
				}
				printf("/");
				
				for (int k=0; k<2*(arr[j]-i); k++){
					printf(" ");
				}
				printf("\\");
				
				for (int k=0; k<i-1;k++){
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
