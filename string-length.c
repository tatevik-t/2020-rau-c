#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s", str);

    //using strlen from library
    printf("%lu\n", strlen(str));
    
    //using while
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    printf("%d\n", len);

    return 0;
}