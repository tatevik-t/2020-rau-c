// найти сумму элементов массива пока не встретится элемент из промежутка [5;24]

#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int a, sum = 0;
    for (int i = 0; !(arr[i] >= 5 && arr[i] <= 24) && i < 10; i++) {
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}