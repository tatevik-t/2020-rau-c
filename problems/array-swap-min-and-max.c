// в массиве поменять местами максимум и минимум
#include <stdio.h>

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++) {
        int x;
        scanf("%d", &x);
        arr[i] = x;
    }
    int max = arr[0], min = arr[0], i_max = 0, i_min = 0;
    for (int i = 1; i < 10; i++) {
        if(max < arr[i]) {
            max = arr[i];
            i_max = i;
        }
        if(min > arr[i]) {
            min = arr[i];
            i_min = i;
        }
    }
    arr[i_max] = min;
    arr[i_min] = max;
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}