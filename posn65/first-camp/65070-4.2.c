#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	
	int i, arr[n], min, max, sum = 0;
	
	for (i=0; i<n;i++){
		scanf("%d", &arr[i]);
		if (arr[i]<0 || arr[i]>100) {printf("Invalid input"); return 0;}
		sum += arr[i];
	}
	
	min = arr[0];
	max = arr[0];
	
	for (i=0; i<n; i++){
		if (min>arr[i]){
			min = arr[i];
		} else if (max<arr[i]){
			max = arr[i];
		}
	}
	
	
	printf("\nmin = %d", min);
	printf("\nmax = %d", max);
	printf("\nsum = %d", sum);
	printf("\nAverage = %f", 1.0*sum/n);
}
