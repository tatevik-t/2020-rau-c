//Дано натуральное число N > 1 и массив длиной N-1. 
//Известно что в массиве хранятся все целые числа из промежутка [1, N] кроме одного.
//Найди отсутствующее число. 

#include <stdio.h>

int main()
{
    const int n = 10;
    int a[n-1];
    for(int i = 0; i < n-1; i++)
        scanf("%d", &a[i]);
    int sum = n*(n+1)/2;
    for(int i = 0; i < n-1; i++)
        sum -= a[i];
    printf("%d", sum);
    return 0;
}

// credit: Shakeh