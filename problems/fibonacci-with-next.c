#include <stdio.h>

int main(void)
{
    unsigned long long current = 1, previous = 0, next;
    int n;
    scanf("%d", &n);
    printf("%llu %llu ", previous, current);
    for(int i = 2; i <= n; i++){
        next = previous + current;
        previous = current;
        current = next;
        printf("%llu ", next);
    }
    

    return 0;
}
//credits: Lyudovikos