// выяснить, есть ли в введённой последовательности последовательные равные числа

#include <stdio.h>

int main()
{
    int current, previous, isequal = 0;
    scanf ("%d", &current);
    while (current)
    {
        previous = current;
        scanf("%d", &current);
        if(current == 0 )
            break;
        if(previous == current)
        {
            isequal = 1;
            break;
        }
    }
    if (isequal == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}

//credits: Lyudovikos