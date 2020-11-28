// Напишите функцию, которая получает натуральное число n в аргументе
// и возвращает 1, если цифры расположены в порядке убывания, в противном случае - 0. 

#include<stdio.h>

int desc(int n){
    while(n > 9){
        if(n%10 >= (n/10)%10){
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", desc(n));
    return 0;
}