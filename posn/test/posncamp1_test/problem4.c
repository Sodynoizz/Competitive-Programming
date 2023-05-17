#include <stdio.h>
#include <stdlib.h>

int is_prime(unsigned long long int x){
    if (x==0 || x==1) return 0;

    for (int i=2; i*i<=x; i++){
        if (x%i==0) return 0;
    }
    return 1;
}

int check_digits(unsigned long long int x) {
    int cnt=0;
    while(x) {
        x = x/10;
        cnt++;
    }
    return cnt;
}

int main(){
    unsigned long long int x;
    int cnt=0;
    scanf("%llu", &x);

    if (check_digits(x)>10) return 0;

    for (unsigned long long int i=2; i*i<=x; i++){
        if (x%i==0) {
            if (is_prime(i) == 1 && is_prime(x/i) == 1){
                printf("%llu %llu", i, x/i);
                return 0;
            }
        }
    }

    printf("Not Found");
    return 0;

}