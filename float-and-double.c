#include <stdio.h>

int main(){
    float f = 1.2;
    double d = 2.354;
    long double ld = 21.34567998;
    printf("float: %f\n", f);
    printf("double %lf\n", d);
    printf("long double: %Lf\n", ld); //by default prints 5 digit after point
    printf("long double: %.8Lf\n", ld);
    printf("long double: %.9Lf\n", ld);

    float a = 1.3;
    float b = 0.3;
    float sum = a+b;
    float diff = a-b;
    float mult = a*b;
    float div = a/b;
    // there is no %

    printf("\nsum: %f\n", sum);
    printf("diff: %f\n", diff);
    printf("mult: %f\n", mult);
    printf("div: %f\n", div);

    int a_c = 1.6;
    printf("%d\n", a_c);

    int a = 10;
    int b = 15;
    float div = (float)b/a;
    printf("%f\n", div);
    return 0;
}