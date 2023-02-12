#include <stdio.h>

void func(int x, int y){
	int z=28;
	if (y%4==0 && y%100!=0 || y%400==0) z = 29;
	int arr[12] = {31, z, 31, 30, 31, 30, 31, 31, 30, 31, 30, 30};
	printf("%d", arr[x-1]);
}

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	func(x,y-543);
}
