#include <stdio.h>
//for taking the min and max of every type
#include <limits.h>

int main(){
    // types of variables
    // equivalents: short int, long int, long long int
    short s = 10;
    int i = 20;
    long l = 30;
    long long ll = 40;
    printf("short: %d\n", s);
    printf("int: %d\n", i);
    printf("long: %ld\n", l);
    printf("long long: %lld\n", ll);

    printf("The minimum value of short is %d\n", SHRT_MIN);
    printf("The maximum value of short is %d\n", SHRT_MAX);
    printf("The minimum value of int is %d\n", INT_MIN);
    printf("The maximum value of int is %d\n", INT_MAX);
    printf("The minimum value of long is %ld\n", LONG_MIN);
    printf("The maximum value of long is %ld\n", LONG_MAX);
    printf("The minimum value of long long is %lld\n", LLONG_MIN);
    printf("The maximum value of long long is %lld\n", LLONG_MAX);
    return 0;
}
