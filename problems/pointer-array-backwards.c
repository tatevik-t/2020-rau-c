//type the elements of an array in backwards using pointers
#include <stdio.h> 
int main(void) {
    const int size = 5; 
    int arr[size] = {1, 5, 35, 4, 6};
    int *ptr = &arr[size - 1]; // arr + size - 1 
    for (int i = 0; i < size; i++) {
        printf("%d\n", *(ptr - i)); 
    } 
    while(ptr >= arr) {
        printf("%d\n", *ptr);
        --ptr;     
    } 
}