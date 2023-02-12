#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N, M, res;
    time_t t;
    scanf("%d", &N);
    int arr[N];
    srand((unsigned) time(&t));
    
    if (N%2==0) M = N/2;
    else M = (N+1)/2;
    
    for (int i=0; i<N; i++){
        res = rand()%99+1;
        arr[i] = res;
        printf("%d ", arr[i]);
    }
    
    int x = 0;
    
    // decending 
    for (int i=0; i<M; i++){
        for (int j=i+1; j<M; j++){
            if (arr[i]<arr[j]){
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }
    
    // assending
    for (int i=M; i<N; i++){
        for (int j=i+1; j<N; j++){
            if (arr[i]>arr[j]){
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }

    printf("\n");
        
    for (int i=0; i<M; i++) printf("%d ", arr[i]);
    printf("|");
    for (int i=M; i<N; i++) printf("%d ", arr[i]);    
}
