// sum the numbers presented by arrays
// for example {0, 0 , 0, 5, 2, 8} = 528
// example input
// 0 0 0 0 0 0 4 5 6 2
// 0 0 0 0 0 0 2 8 4 6
// example output
// 0 0 0 0 0 0 7 4 0 8

#include <stdio.h>

int main(void){
    int a[10], b[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 10; i++){
        scanf("%d", &b[i]);
    }
    int res [10], carry=0;
    for(int i = 9; i >= 0; i = i-1){
        res[i] = a[i] + b[i] + carry;
        if(res[i] >= 10){
            res[i] = res[i]%10;
            carry = 1;
        }
        else{
            carry = 0;
        }
    }
    for (int i = 0; i < 10; i++){
        printf("%d ", res[i]);
    }
    printf("\n");
}