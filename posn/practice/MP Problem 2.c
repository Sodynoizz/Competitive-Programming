#include <stdio.h>
#include <string.h>

int check_lengths(char *ch){
	return strlen(ch);
}

int main(){
	char ch[100];
	int lengths;
	gets(ch);
	lengths = check_lengths(ch);
	printf("%d", lengths);
}
