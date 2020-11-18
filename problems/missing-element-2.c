//Дано натуральное число N > 1 и массив длиной N-1. 
//Известно что в массиве хранятся все целые числа из промежутка [1, N] кроме одного.
//Найди отсутствующее число. 

#include <stdio.h>

int main()
{
    const int n = 10;
    int arr[n-1], arr_2[n];
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }
    for( int j = 0; j < n; j++) {
        arr_2[j] = 0; 
    }
    for(int i = 0; i < n - 1; i++) {
        arr_2[arr[i]-1] ++;
    }
    for(int i = 0; i < n; i++) {
        if(arr_2[i] == 0) {
            printf("%d", i+1);
            break;
        }
    } 
}

// credit: Gayaneh