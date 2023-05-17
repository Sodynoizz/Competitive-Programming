#include <stdio.h>

int main(){
	int x ,arr[3], cnt=0;
	scanf("%d", &x);
	
	while (x) {
		arr[cnt] = x%10;
		x=x/10;
		cnt++;
	}
	
	if (cnt!=3) return 0;
	
	for(int i=0;i<3;i++){
		printf(" ");
		if(i!=1){
			switch(arr[2]){
				case 1: printf("     "); break;
				case 2: printf("     "); break;
				case 3: printf("  *  "); break;
				default: printf("*   *"); break;
			}
			printf(" | ");
			
			switch(arr[1]){
				case 1: printf("     "); break;
				case 2: printf("     "); break;
				case 3: printf("  *  "); break;
				default: printf("*   *"); break;
			}
			printf(" | ");
			
			switch(arr[0]){
				case 1: printf("     "); break;
				case 2: printf("     "); break;
				case 3: printf("  *  "); break;
				default: printf("*   *"); break;
			}
		}
		else{
			switch(arr[2]){
				case 2: printf("*   *"); break;
				case 4: printf("     "); break;
				case 6: printf("*   *"); break;
				default: printf("  *  "); break;
			}
			printf(" | ");
			
			switch(arr[1]){
				case 2: printf("*   *"); break;
				case 4: printf("     "); break;
				case 6: printf("*   *"); break;
				default: printf("  *  "); break;
			}
			printf(" | ");
			
			switch(arr[0]){
				case 2: printf("*   *"); break;
				case 4: printf("     "); break;
				case 6: printf("*   *"); break;
				default: printf("  *  "); break;
			}
			
		}
		printf("\n");
	} 
	return 0;
}


