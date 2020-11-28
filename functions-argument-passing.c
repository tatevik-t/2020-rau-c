#include<stdio.h>
// C has 2 ways to pass values to function: by value and by address
// argument passing by value
void foo(int x, int y){ // int x = a; int y = b;
    x = x + 2;
    y = 15;
}

// argument passing by address
void foo2(int* px, int* py) { // int* px = &a;, int* py = &b;
    *px = *px + 2;
    *py = 15;
}

// example for swaping problem
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 10;
    int b = 20;
    
    foo(a, b);
    printf("a = %d\nb = %d\n", a, b);
    
    foo2(&a, &b);
    printf("a = %d\nb = %d\n", a, b);

    swap(&a, &b);
    printf("a = %d\nb = %d\n", a, b);

    return 0;
} 