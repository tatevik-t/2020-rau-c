//print numbers from 1 to n using recursion

#include <stdio.h>

void printArray(int arr[], int size){
    if(size == 0){
        return;
    }
    printArray(arr, size - 1);
    printf("%d ", arr[size - 1]);
}

int main(){
    const int size = 5;
    int arr[] = {4, 6, 87, -6, 35};
    printArray(arr, size);
}