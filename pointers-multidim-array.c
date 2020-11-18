#include <stdio.h>

int main(){
    // multidimensional array is the array consisted of other arrays
    // here is 2-dimensional array (you can imagine it as a matrix)
    int multidim_arr[2][2] = {{1,2}, {3,4}};

    // the multidim_arr is a pointer that refers to first subarray
    printf("%p\n", *multidim_arr);
    
    // to get the pointer to the start of second subarray
    printf("%d\n", **(multidim_arr + 1));

    // so **multidim_arr would give us first element of the first subarray
    printf("%d\n", **multidim_arr);            //1
    printf("%d\n", multidim_arr[0][0]);        //1

    printf("%d\n", **(multidim_arr + 1));      //2
    printf("%d\n", multidim_arr[1][0]);        //2
    
    printf("%d\n", *(*(multidim_arr) + 1));    //3
    printf("%d\n", multidim_arr[0][1]);        //3

    printf("%d\n", *(*(multidim_arr + 1) + 1));//4
    printf("%d\n", multidim_arr[1][1]);        //4
    
    return 0;
}