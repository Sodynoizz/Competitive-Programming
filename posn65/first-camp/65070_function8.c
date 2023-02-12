#include <stdio.h>
#include <stdbool.h>

bool check(char c){
	if (c=='Y'|| c== 'y' || c== 'N'|| c== 'n'){
		return true;
	}
	return false;
}

int main(){
	char c;
	scanf("%c", &c);
	
	if (check(c)){printf("yes");}
	else printf("no");
}
