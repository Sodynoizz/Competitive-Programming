#include <stdio.h>

void binary(int x){
	int arr[100], i=0;
	while (x){
		arr[i] = x %2;
		x = x/2;
		i++;
	}
	
	for (int j=i-1; j>=0; j--){
		printf("%d", arr[j]);
	}
	printf("\n");
}

void octa(int x){
	int arr[100], i=0;
	while (x){
		arr[i] = x%8;
		x= x/8;
		i++;
	}
	
	for (int j=i-1; j>=0; j--){
		printf("%d", arr[j]);
	}
	printf("\n");
	
}


void hexa(int x){
	int arr[100], i=0;
	while (x){
		arr[i] = x%16;
		x= x/16;
		i++;
	}
	
	for (int j=i-1; j>=0; j--){
		if (arr[j]>=10) {
			arr[j] = arr[j] + 55;
			printf("%c", arr[j]);
		}
		else printf("%d", arr[j]);
	}
	
	printf("\n");
	
}

int main(){
	int x;
	scanf("%d", &x);
	binary(x);
	octa(x);
	hexa(x);
	
}
