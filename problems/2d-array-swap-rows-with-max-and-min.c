//  swap two rows that contain maximum and minimum

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    const int n = 3, m = 4;
    int arr[n][m];

    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0], min = arr[0][0];
    int max_idx = 0, min_idx = 0;

    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (arr[i][j] > max){
                max = arr[i][j];
                max_idx = i;
            }
            else if (arr[i][j] < min){
                min = arr[i][j];
                min_idx = i;
            }
        }
    }
    
    if(max_idx != min_idx){
        for(int i = 0; i < m; i++){
            swap(&arr[max_idx][i], &arr[min_idx][i]);
        }
    }

    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}