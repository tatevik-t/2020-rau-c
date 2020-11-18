#include<stdio.h>

// an example of 2-dimensional array

int main(){
    const int size = 5;
    int arr[size][size];
    int counter = 1;

    // initializing
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            arr[i][j] = counter++;
        }
    }

    // printing
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}