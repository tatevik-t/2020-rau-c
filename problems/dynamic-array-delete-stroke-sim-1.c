// delete stroke similar to first stroke from dynamic array
#include <stdio.h>
#include <stdlib.h>

int equalStroke(int arr1[], int arr2[], int size){
    for(int i = 0; i < size; i++){
        if(arr1[i] != arr2[i])
            return 0;
    }
    return 1;
}

int main(void) {
    int n = 4, m = 4;
    int ** M = (int**) malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++) {
        M[i] = (int*)malloc(m*sizeof(int));
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &M[i][j]);
        }
    }
    
    for(int i = 1; i < n; i++){
        if (equalStroke(M[0], M[i], m)){
            free(M[i]);
            for(int j = i; j < m-1; j++){
                M[j] = M[j+1]; 
            }
            i--;
            n--;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++) {
        free(M[i]);
    }
    free(M);
    return 0;
}