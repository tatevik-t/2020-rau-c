#include <stdio.h>

int main(){
    // division and remainder-division causes an error while dividing on 0 for ints, returns infinity for floats
    float x = 1, y = 0;
    float div = x/y;
    printf("%f\n", div);
    return 0;
}