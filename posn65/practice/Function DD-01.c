#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

void start_over();
void cal();
void con();
bool check_prime();

void start_over(){
	int y;
	printf("\nEnter a number : ");
	scanf("%d", &y);
	if (y<0) {
		exit(0);
	}
	else{
		cal(y);	
	}
}

void con(){
	int c;
	printf("\nContinue? (0,1) : ");
	scanf("%d", &c);
	
	if (c==1){
		start_over();
	} 
	else{
		exit(0);
	}
}

bool check_prime(int x){
	int i;
	if (x==0 || x==1) {return false;}
	else{
		for (i=2;i*i<=x;i++){
		if (x%i==0){
			return false;
		}
	}
	return true;
}
}

void cal(int x){
  if (check_prime(x)){
    printf("yes");
  }
  else{
    printf("no");
  }
	con();
}

int main() {
	int y;
	scanf("%d", &y);
	if (y<0) {
		return 0;
	}
	cal(y);
}
