// найти максимальное количество используемой цифры среди чисел массива и вывести эту цифру
#include <stdio.h>

int main(void) {
    int count[10] = {0};
    int n;
    while(scanf("%d", &n) && n!=0){
        int m = n;
        while (m > 0) {
            int t = m % 10;
            count[t]++;
            m /= 10;    
        }
    }
    int max = count[0];
    for (int i = 1; i < 10; i++)
        if (count[i] >= max)
            max = count[i];
    for (int i = 1; i < 10; i++)
        if (count[i] == max)
            printf("%d\n", i);
  return 0;
}