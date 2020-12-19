// sort by first column

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 4, m = 4;
    int** arr = (int**)malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(m*sizeof(int));
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int j = 0; j < n-1; j++) {
        int swwaped = 0;
        for(int i = 0; i < n-1-j; i++) {
        if(arr[i][0] > arr[i+1][0]) {
            int *temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            swwaped = 1;
        }
        }
        if(swwaped == 0) {
            break;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
    
    return 0;
}