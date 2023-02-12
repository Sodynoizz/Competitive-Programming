#include<bits/stdc++.h>
using namespace std;

int n;

long long fibo[1000];
long long digit[1000];

int main() {
    scanf("%d", &n);
    fibo[0] = fibo[1] = digit[0] = digit[1] = 1;
    for(int i=2;i<=n;i++) {
        fibo[i] = fibo[i-1]+fibo[i-2];
        digit[i] = (int)ceil(log10(fibo[i]));
    }
    int k = digit[n]+1;

    for(int i=n-1;i>=0;i--) {
        for(int j=0;j<=i;j++) for(int l=0;l<k;l++) printf("_");

        for(int j=0;j<=n-1-i;j++) {
            for(int l=0;l<k-digit[j];l++) printf("_");
            printf("%lld", fibo[j]);
        }

        for(int j = n-1-i-1;j>=0;j--) {
            for(int l=0;l<k-digit[j];l++) printf("_");
            printf("%lld", fibo[j]);
        }

        for(int j=0;j<=i;j++) for(int l=0;l<k;l++) printf("_");
        printf("\n");
    }
    for(int i=1;i<n;i++) {
        for(int j=0;j<=i;j++) for(int l=0;l<k;l++) printf("_");

        for(int j=0;j<=n-1-i;j++) {
            for(int l=0;l<k-digit[j];l++) printf("_");
            printf("%lld", fibo[j]);
        }

        for(int j = n-1-i-1;j>=0;j--) {
            for(int l=0;l<k-digit[j];l++) printf("_");
            printf("%lld", fibo[j]);
        }

        for(int j=0;j<=i;j++) for(int l=0;l<k;l++) printf("_");
        printf("\n");
    }
    return 0;
}