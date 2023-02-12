#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
	char s[10005];
	scanf("%s", s);
	bool upper=false, lower=false;
	for (int i=0; i<strlen(s); i++){
		if (isupper(s[i])) upper = true;
		if (islower(s[i])) lower = true;
	}
	
	if (lower && upper) printf("Mix");
	else if (lower && !upper) printf("All Small Letter");
	else if (!lower && upper) printf("All Capital Letter");
	else return 0;
}
