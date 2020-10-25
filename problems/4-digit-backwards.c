// backwards typing of 4-digit number

#include <stdio.h>

int main()
{
    int x;
    printf("Enter 4-digit int: ");
    scanf("%d", &x);

    int last = x%10;
    int p_last = x/10%10;
    int pp_last = x/100%10;
    int ppp_last = x/1000;

    printf("%d~%d~%d~%d\n", last, p_last, pp_last, ppp_last);

    int number = last*1000 + p_last*100 + pp_last*10 + ppp_last;

    printf("The number: %d\n", number);

}