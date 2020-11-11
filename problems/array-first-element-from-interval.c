// найти первый подходящий под данное условие элемент из массива:
// элемент принадлежит промежутку [5;24] 
#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int a;
    for (int i = 0; i < 10; i++) {
        if (arr[i] >= 5 && arr[i] <= 24) {
            a = arr[i];
            break;
        }
    }
    printf("%d", a);
    return 0;
}