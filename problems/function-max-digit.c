// Напишите функцию, которая получает натуральное число n в аргументе 
// и возвращает наибольшую цифру

#include <stdio.h>

int max_digit(int n){
    int max = 0;
    while(n){
        if(n%10 > max){
            max = n%10;
        }
        n /= 10;
    }
    return max;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", max_digit(n));
    return 0;
}