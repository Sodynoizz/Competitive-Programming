#include <stdio.h>
int main(){
	long long int x;
	scanf("%lld", &x);
	int arr[13], cnt=0, a=0, b=0;
	arr[12] = 0;
	
	while (x){
		arr[cnt] = x%10;
		x = x/10;
		cnt++;
	}
	
	for (int i=1; i<13; i+=2) a+=3*arr[i];
	for (int i=2; i<13; i+=2) a+=arr[i]; 
	
	if ((a+arr[0])%10==0) printf("YES");
	else printf("NO");

}
