#include <stdio.h>

int swap(int *x, int *y){
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

int main(){
    int x = 10, y = 10;
    // works incorrectly because the same variable has the same address
    swap(&x, &x);
    printf("%d %d\n", x, y); //0, 10

    return 0;
}