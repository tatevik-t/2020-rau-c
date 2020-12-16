#include <stdio.h> 
#include <stdlib.h> 

int main(void) { 
    int n = 3, m = 4; 
    int **M = (int**)malloc(n*sizeof(int*)); 
    for(int i = 0; i < n; i++) { 
        M[i] = (int*)malloc(m*sizeof(int)); 
    } 
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < m; j++) { 
            printf("i = %d j = %d\n", i, j); 
            printf("%d\n", M[i][j]); 
        } 
    } 
    for(int i = 0; i < n; i++) { 
        free(M[i]); 
    } 
    free(M); 
    return 0; 
} 