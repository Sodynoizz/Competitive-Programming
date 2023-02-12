#include <stdio.h>
#include <string.h>
int main(){
	int i,j,k;
	char ch[50];
	char rude[3][50] = {"fuck", "bitch", "shit"};
	gets(ch);
	for (i=0; i<strlen(ch); i++){
		for (k=0;k<3;k++){
			for (j=0; j<strlen(rude[k]) && j+i<strlen(ch); j++){
				if (ch[i+j]!=rude[k][j]) break;
			}	
			if (j==strlen(rude[k])){
				ch[i+2] = '*';
				i+=strlen(rude[k])-1;
				break;
			}		
		}
	}
	printf("%s", ch);
	return 0;
}

