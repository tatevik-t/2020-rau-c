// fibonacci numbers

#include <stdio.h>

int main(void)
{
    unsigned long long current = 1, previous = 0;
    int n;
    scanf("%d", &n);
    printf("%llu ", current);
    for(int i = 1; i < n; i++){
        printf("%llu ", current);
        previous = current - previous;
        current += previous;
    }
    return 0;
}

//credits: Shakeh