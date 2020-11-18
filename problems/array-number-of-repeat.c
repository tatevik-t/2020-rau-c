//Подсчитать количество повторяющихся элементов в данном массиве. 

#include <stdio.h>
int main() {
    const int size = 8;
    int arr[] = {14, 33, 27, 14, 35, 14, 42, 33};
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; 
    }
    // for (int k = 0; k < size; k++) {
    // printf("%d ", arr[k]); 
    // } 
    int count = 0; 
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) { 
            count++;
            while(i < size - 1 && arr[i] == arr[i + 1]) {
                i++; 
            } 
        } 
    } 
    printf("%d", count); 
}

//credit: H. Movsisyan