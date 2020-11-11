// просуммировать все элементы в массиве пока не встретится нечётный элемент
#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        int x;
        scanf("%d", &x);
        arr[i] = x;
    }
    int i = 0;
    int sum = 0;
    while (arr[i] % 2 == 0 && i < 10){
        sum += arr[i];
        i++;
    }
    printf("%d", sum);
}