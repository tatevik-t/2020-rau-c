// Вывести на экран разницу каждого и элемента и среднего арифметического всех элементов. 
#include <stdio.h>

int main(void)
{
    int a[1000];
    int n; 
    double arifmetic_sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++)
        arifmetic_sum += a[i];
    arifmetic_sum /= n;
    for(int i = 0; i < n; i++)
        printf("%lf ", a[i]-arifmetic_sum);
 

    return 0;
}