#include <stdio.h>
int main(){
	int x,y,z, sum=0;
	int dayinmonths[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if (x>8) {
		for (int i=x; i<12; i++){
			sum+=dayinmonths[i];
		}
		
		for (int i=0; i<8; i++){
			if (i==8) {
				sum+=12;
				break;
			}
			else sum+=dayinmonths[i-1]; 	
		}
	}
	
	else {
		for (int i=x; i<=8; i++){
			if (i==8) {
				sum+=12;
				break;
			}
			else sum+=dayinmonths[i-1]; 			
		}
	}

	
	printf("%d\n", sum);
	printf("%d",(sum+y-2)%7+1);
}
