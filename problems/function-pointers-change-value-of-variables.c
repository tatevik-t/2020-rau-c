// change values of variables
#include <stdio.h>

void f(int* a, int *b, int *c) {
    *a+=1;
    *b+=2;
    *c+=3;
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    f(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    

    return 0;
}