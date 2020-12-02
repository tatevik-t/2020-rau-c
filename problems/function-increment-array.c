// increment every element of an array

#include <stdio.h> 

void incArray(int *arr, const int size) { // int *arr = a; 
    for (int i = 0; i < size; i++) {
        arr[i]++; 
    } 
} 

void printArray(int arr [], const int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
} 

int main(void) {
    const int size = 5;
    int a[] = {1, 5, 65, -9, 6};
    
    printArray(a, size);
    incArray(a, size);
    printArray(a, size);
    
    return 0; 
} 