#include <stdio.h>
#include <math.h>
int main(){
	long long int x;
	int arr[100], i=0; 
	double sum=0;
	
	scanf("%llu", &x);
	
	while(x){
		arr[i] = x%10;
		if (arr[i]>1 || arr[i]<0) return 0;
		x = x/10;
		i++;
	}
	
	for (int j=i-1; j>=0; j--) sum += arr[j] * pow(2, j);
	printf("%d", (int)sum);
}
