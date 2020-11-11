// put negative elements on the right part of array, positive on the left
#include "stdio.h"

int main(void){
    int a[10];
    for(int i = 0; i < 10; i++){
        scanf("%d",&a[i]);
    }
    int res[10];
    int ind1 = 0;
    int ind2 = 9;
    for(int j = 0; j < 10; j++){
        if(a[j] >= 0){
            res[ind1] = a[j];
            ind1++;
        }
        else{
            res[ind2] = a[j];
            ind2--;
        }
    }

    for(int i = 0; i < 10; i ++){
        printf("%d ",res[i]);
    }
    return 0;
}