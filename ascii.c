//ascii

#include <stdio.h>

int main(){
    int code;
    printf("Enter an ASCII code ");
    scanf("%d", &code);
    // char symbol = code;
    printf("%c\n", code);

    char symbol;
    printf("Enter the symbol: ");
    scanf("%c", &symbol);
    printf("%d\n", symbol);
    return 0;
}