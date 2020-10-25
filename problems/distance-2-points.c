// calculate the distance between 2 points
#include <stdio.h>
#include <math.h>

int main(){
    double x1, x2, y1, y2;
    printf("Enter x1, x2, y1, y2: ");
        scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
    double d = pow(pow((x1-x2), 2) + pow((y1-y2), 2), 0.5);
    printf("Distance is %.3lf\n", d);
    return 0;
}