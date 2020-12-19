#include <stdio.h> 
#include <stdlib.h> 

int* retArray(int n) { 
    // you can't return a static array because statik array "lives" only in function and then will be deleted
    int *arr = (int*)malloc(n*sizeof(int)); 
    return arr; 
} 
    
int main() { 
    int * arr = retArray(10); 
    return 0; 
} 