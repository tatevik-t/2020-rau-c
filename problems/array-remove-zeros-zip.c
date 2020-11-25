// Убрать все нули из последовательности и сжать (не использовать вспомогательный массив). 

#include<stdio.h>

int main()
{
    const int n=10;
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 0; i < n - count; i++){
        if(arr[i] == 0){
            for(int j = i; j < n -1; j++)
                arr[j] = arr[j+1];
            count++;
            i--;
        }
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
      for(int i = 0; i < n - count; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}