// В заданном массиве найти элементы которыйе одновременно положительные и нечетные. 

#include <stdio.h>

int main(void)
{
    int a[1000];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        if(a[i] > 0 && a[i] % 2 == 1)
            printf("%d ", a[i]);
    }

    return 0;
}