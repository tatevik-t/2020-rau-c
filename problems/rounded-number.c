// round the number without using any function
#include <stdio.h>

int main(){
    float x;
    printf("Enter a float: ");
        scanf("%f", &x);
    int a = x+0.5;
    printf("Rounded number: %d\n", a);
    return 0;
}
