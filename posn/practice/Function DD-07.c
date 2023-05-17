#include <stdio.h>
int main(){
	int d,m,i;
	
	char months[12][50] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int daysinmonths[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	
	printf("Enter a daycode: ");
	scanf("%d", &d);
	
	
	printf("Enter month: ");
	scanf("%d", &m);
	printf("\n\n");
	printf("%s\n\n", months[m-1]);
	
	
	printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	
	for (i=1; i<d;i++){
		printf("\t");
	}
	
	for (i=1; i<=daysinmonths[m-1]; i++){
		printf("%d\t", i);
		if ((d-1+i)%7==0){
			printf("\n");
		}
	}
	
}
