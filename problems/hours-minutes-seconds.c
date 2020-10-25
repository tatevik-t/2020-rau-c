// seconds to hours, minutes and seconds
#include <stdio.h>

int main(){
    unsigned int sec;
    printf("Enter the number of seconds: ");
        scanf("%d", &sec);
    int h = sec/3600;
    int m = (sec - h*3600)/60;
    int rem_sec = sec - h*3600 - m*60;
    printf("It is %d hours, %d minutes, %d seconds\n", h, m, rem_sec);
    return 0;
}