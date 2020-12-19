#include <stdio.h>
#include <stdlib.h>

int main(){
    // calloc initialize the array with zeros
    int *arr1 = (int*)calloc(100, sizeof(int));
    int *arr = (int*)malloc(100*sizeof(int));
    if(arr == NULL){   // we must check if allocating of an array was successful
        printf("There is no memory\n");
        abort();   // aborts the programm (core dump)
        // exit(0);   // exit with status 0
    }
    printf("After if\n");
    abort();
    return 0;
}