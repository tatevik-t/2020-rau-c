#include <stdio.h> 

#include <stdio.h>
int maxArr(int arr[], int n) {
    if(n == 1) {
        return arr[0];
    }
    int max = maxArr(arr, n-1);
    if(max < arr[n-1]) {
        max = arr[n-1];
    }
    return max;
}

int main()
{
    const int n = 10;
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = maxArr(arr, n);
    printf("%d", max);

    return 0;
}