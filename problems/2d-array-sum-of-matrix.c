// calculate the sum of rows
#include <stdio.h>

int main()
{
    const int n = 4, m = 3;
    int arr[n][m], a[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
        }
        a[i] = sum;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}