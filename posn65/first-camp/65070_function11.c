#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(int x, int y){
	while (x!=y){
		if (x>y) printf("The number is too low. Try again.Enter number (1-100) : ");
		else printf("The number is too high. Try again.Enter number (1-100) : ");
		scanf("%d", &y);
	}
	printf("\nCorrect !!!");
	return 0;
}
int main(){
	int y;
	srand(time(NULL));
	int x = rand()%100;
	printf("%d\n", x);
	printf("Enter number (1-100) : ");
	scanf("%d", &y);
	game(x,y);
}
