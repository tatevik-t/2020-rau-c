// count area of rectangle using functions
#include<stdio.h>
int square(int a, int b){
    return a*b;
}

int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int s = square(a, b);
    printf("%d\n", s);
}