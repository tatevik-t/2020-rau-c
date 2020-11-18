#include <stdio.h>

int main(){
    int arr[5] = {12,34,6,7,8};

    // the name of the array is the pointer to the first element of arr (arr[0], programmists count from 0)
    printf("%p\n", arr);
    printf("%d\n", *arr);
    // its equivalent to arr[0]
    printf("%d\n", arr[0]);

    // the elements of array are stored one after another in the memory
    // getting the second element, it comes after first, so we can add 1 to arr
    printf("%d\n", *(arr + 1));
    printf("%d\n", arr[1]);

    // also we can change the value of the element
    printf("%d\n", *(arr + 1) += 2);
    printf("%d\n", arr[1] += 2);

    // C is unsafe language, so be careful not to point (and not to change) the segment of memory 
    // that you don't know what it does (is over the array limits)
    // printf("%d\n", *(arr + 5) += 2);


    return 0;
}