// get the third number from the end
#include <stdio.h>

int main(){
    short num;
    printf("Enter a 5-digit number: ");
        scanf("%hd", &num);
    short n = (num%1000)/100;
    printf("The 3rd number from the end is: %hd\n", n);
    return 0;
}