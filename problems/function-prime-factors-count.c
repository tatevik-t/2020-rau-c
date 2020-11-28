// Напишите функцию, которая принимает натуральное число n в аргументе
// и возвращает количество всех простых делителей этого числа. 

#include <stdio.h>
int isPrime(int n)
{
    int isPrime = 1;
    for(int i = 2; i*i<=n; i++)
    {
        if(n%i == 0){
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int nextPrimeNumber(int n)
{
    for(int i = n+1 ; ; i++)
    {
        if(isPrime(i))
        return i;
    }
}

int countOfPrimeDivisors(int n)
{
    int count = 0;
    int primeDivisor = 2;
    while(n != 1)
    {
        if(n % primeDivisor == 0){
            count++;
            n /= primeDivisor;
        }
        else
            primeDivisor = nextPrimeNumber(primeDivisor);
    }
    return count;
}

int main()
{
    int m;
    scanf("%d", &m);
    int k = countOfPrimeDivisors(m);
    printf("%d", k);
    
    return 0;
}