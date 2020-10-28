//В заданном массиве найти количество элементов которые меньше квадрата своего индекса. 
#include <stdio.h>

int main()
{
    const int N=1000;
    int arr[N] = {}, n, count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] < i*i) {
            count++;
        }
    }
    printf("%d", count);
    

    return 0;
}