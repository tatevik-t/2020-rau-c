// memory testing with unsigned types
#include <stdio.h>
#include <limits.h>

int main(){
    short x = 40000;
    unsigned short x_s = 40000; // unsigned - positive number
    printf("%d\n", x);
    printf("%d\n", x_s);
    x_s = -1;
    printf("%d\n", x_s);
    printf("The MAX value of unsigned short is %d\n", USHRT_MAX);
    return 0;
}