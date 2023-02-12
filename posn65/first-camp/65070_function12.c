#include <stdio.h>
int arr[3];

int check(int sum){
	if (arr[0]==arr[1] && arr[0]==arr[2]) printf("three : %d\nthree of a kind", sum);
	else if (sum>=4 && sum<=10) printf("three :%d\nlow", sum);
	else if (sum>=11 && sum<=17) printf("three : %d\nhigh", sum);
	return 0;	
}

int main(){
	int sum=0;
	for (int i=0;i<3;i++){
		printf("dice%d : ", i+1);
		scanf("%d", &arr[i]);
		if (arr[i]<1 || arr[i]>6) return 0;
		sum+=arr[i];
	}
	
	check(sum);
}
