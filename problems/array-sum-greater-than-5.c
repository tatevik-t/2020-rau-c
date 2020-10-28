#include <stdio.h>
// В заданном массиве найти сумму чисел которые больше 5. 

int main(void) 
{ 
    const int size = 1000;
    int arr[size]; 
    int N; 
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    { 
        scanf("%d", &arr[i]); 
    }
    
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        if(arr[i] > 5)
        {
            sum += arr[i]; 
        } 
    } 
    printf("%d", sum); 
} 