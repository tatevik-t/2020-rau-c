#include <stdio.h> 
#include <string.h> 

int main() { 
    char str2[10]; 
    char str1[1000] = "StringString147123654zxcvbnmasdfghjkaazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"; 
    strcpy(str2, str1); 
    printf("%lu", strlen(str2)); 
    return 0; 

} 