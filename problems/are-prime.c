// which of entered numbers are prime
#include<stdio.h>

int main(){
    unsigned N;
    scanf("%u", &N);
    for (int j = 1; j <= N; j++){
        int n;
        scanf("%d", &n);
        
        int isPrime = 1;
        for (int i = 2; i*i <= n; i++){
            if(n % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d", n);
    }
    return 0;
}