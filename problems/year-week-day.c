// days to years, weeks and days
#include <stdio.h>

int main(){
    unsigned int x1;
    printf("Enter the number of days: ");
        scanf("%d", &x1);
    unsigned int year = x1/365;
    unsigned int week = (x1 - year*365)/7;
    unsigned int days = x1 -year*365 - week*7;
    printf("%d = %d years, %d weeks, %d days\n", x1, year, week, days);

    return 0;
}