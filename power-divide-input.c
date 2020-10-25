#include <stdio.h>
#include <math.h>

int main()
{
    // power
    int x = 2;
    int x_pow = pow(2,10);
    printf("The %d in 10th power is %d\n", x, x_pow);
    
    // division and division reminder
    int a = 10;
    int d = 15;
    int div = d/a;
    int div_rem = d%a;
    printf("Div = %d\nDiv_rem = %d\n", div, div_rem);

    //input
    int y;
    printf("Enter the integer: ");
    scanf("%d", &y);
    printf("Your number is %d\n", y);
}
    