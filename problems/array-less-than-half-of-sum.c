#include <stdio.h> 
// В заданном массиве найти количество элементов 
// которые меньше полусуммы своих соседних элементов.

int main(void) {
    const int size = 1000;
    int arr[size];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    int count = 0;
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] < (arr[i-1] + arr[i+1])/2.0) {
            count++; 
        }
    } 
    printf("%d", count); 
} 