#include <stdio.h>

int sum=0;


int fact(int x){
	int k;
	if (x==1) {
		sum+=1;
		return 1;	
	}
	
	k = x* fact(x-1);
	sum+=k;

	return k; 
}

int main(){
	int n;
	scanf("%d", &n);
	
	fact(n);
	printf("%d", sum);	
}
