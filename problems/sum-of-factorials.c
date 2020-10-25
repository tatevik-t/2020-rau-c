//Дано натуральное число N. Используя один цикл, вычислите 1! + 2! +3! +… + N! . 

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int sum = 0, a = 1;
    for (int i=1; i<=n; i++){
        a *= i;
        sum += a;
        
    }
    printf("%d", sum);
    return 0;
}