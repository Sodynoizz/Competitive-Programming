#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int d = a + b + c;
	if (d >= 80 && d <= 100) {
		printf("A");
	} else if (d >= 75 && d <= 79) {
		print("B+");
	} else if (d >= 70 && d <= 74) {
		printf("B");
	} else if (d >= 65 && d <= 69) {
		printf("C+");
	} else if (d >= 60 && d <= 64) {
		printf("C");
	}
}