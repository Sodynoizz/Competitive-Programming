#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(int x, int y){
	int cnt = 0;
	while (y!=x){
		printf("Enter number (1-100) : ");
		scanf("%d", &y);
		cnt++;
	}
	
	return cnt;
}


int main(){
	srand(time(NULL));
	int x = rand()%100;
	int y, cnt;
	
	printf("\nEnter a number (1-100) : ");
	scanf("%d" , &y);
	
	cnt = game(x,y);
	printf("\nyou guessed %d times wrong.", cnt);
}
