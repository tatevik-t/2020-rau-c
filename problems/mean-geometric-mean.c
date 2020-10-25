// mean and geometric mean

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    
    printf("Enter 1st int: ");
    scanf("%d", &x);
    printf("Enter 2nd int: ");
    scanf("%d", &y);
    
    float mean = (x+y)/2.0;
    float geom_mean = sqrt(x*y);
    // another variant to get square root
    //float geom_mean_1 = pow(x*y, 0.5);
    
    printf("Mean = %f\n", mean);
    printf("Geom mean = %f\n", geom_mean);
    //printf("Geom mean = %f\n", geom_mean_1);
    
    return 0;
}