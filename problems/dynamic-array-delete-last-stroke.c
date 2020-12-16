// удалить строку
#include <stdio.h> 
#include <stdlib.h> 

int main(void) { 
    int n = 3, m = 4; 
    int **M = (int**)malloc(n*sizeof(int*)); 
    for(int i = 0; i < n; i++) {
        M[i] = (int*)malloc(m*sizeof(int)); 
    } 
    for(int i = 0;i<n;i++){ 
        for(int j = 0;j<m;j++){ 
            scanf("%d", &M[i][j]); 
        } 
    } 
    free(M[n-1]); 
    for(int i = 0;i<n-1;i++){ 
        for(int j = 0;j<m;j++){ 
            printf("%d ", M[i][j]); 
        } 
        printf("\n"); 
    } 
    for(int i = 0;i<n-1;i++){
        free(M[i]);
    } 
    free(M);
} 