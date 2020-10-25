//Найдите все числа меньше 100, квадраты которых симметричны 
#include<stdio.h>

int main(){
    int i, n, m = 0;
    for(i = 1; i <= 100; i++){
        n = i*i;
        m = 0;
        while(n){
            m = 10*m + n%10;
            n = n/10;
        }
        if(i*i == m)
            printf("%d ", i);
    } 
    return 0;
}