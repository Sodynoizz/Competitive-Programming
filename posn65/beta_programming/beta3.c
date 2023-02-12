#include <stdio.h>
int main(){
	int x;
	scanf("%d", &x);
	int arr[x];

	for (int i=0; i<x; i++){
		scanf("%d", &arr[i]);
	}
	
	int min = arr[0];
	int max = arr[0];
	
	for (int i=0; i<x; i++){
		if (min>arr[i]) min = arr[i];
		else if (max<arr[i]) max = arr[i];
	}
	printf("%d\n%d", min, max);
	
}
