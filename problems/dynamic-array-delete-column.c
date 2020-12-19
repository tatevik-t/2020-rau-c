// delete specific colon from dynamic array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 3, m = 4, k;
    scanf("%d ", &k);
    int **arr = (int **)malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++){
        arr[i] = (int*)malloc(m*sizeof(int));
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = k; j < m -1; j++){
        arr[i][j] = arr[i][j+1];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m-1; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++){
        free(arr[i]);
    }
    free(arr);

    return 0;
}