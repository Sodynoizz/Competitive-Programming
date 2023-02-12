#include <stdio.h>
int main(){
	int arr[10];
	int i, j, min, max;
	for (i=0; i<=9; i++){
		scanf("%d", &arr[i]);
	}
	
	min = arr[0];
		
	for (j=0; j<=9; j++){
		if (min>arr[j]){
			min = arr[j];
		} else if (max<arr[j]){
			max = arr[j];
		}
	}
	
	printf("%d %d", min, max);
	return 0;
}
