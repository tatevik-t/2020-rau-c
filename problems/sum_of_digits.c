//На вход программе подается натуральное число n.
//Вычислите сумму его цифр, затем сумму цифр полученного числа и так далее, пока не получится однозначное число. 

#include <stdio.h>

int main(){
    unsigned int n, sum;
    scanf("%u", &n);
    while(n >= 10){
        sum = 0;
        while (n){
            sum += n%10;
            n /= 10;
        }
        n = sum;
        printf("%u ", n);
    }
    printf("%u ", n);
    return 0;
}