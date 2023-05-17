#include <stdio.h>
#include <stdbool.h>

bool is_prime(int x){
	for (int i=2; i*i<=x; i++) {
		if (x%i==0) return false;
	}
	return true;
}

int main(){
	int N, i=2, cnt=0, comma=1;
	scanf("%d", &N);
	while (cnt<N) { 
		if (is_prime(i)) {
			if (cnt==N-1) comma--;
			printf("%d", i);
			
			if (comma) printf(", "); 
			else printf("");
			cnt++;	
		}
		
		i++;
	}
}
