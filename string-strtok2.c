#include <stdio.h> 
#include <string.h>

int main() { 
    char str1[100] = "This is a string."; 
    //strtok saves the remaining part in static variable so we can use it in next function call 
    for(char *token = strtok(str1, " "); token != NULL; token = strtok(NULL, " ")) 
    { 
        puts(token); 
    } 
    
    // char* token = strtok(str1, " "); 
    // puts(token); 
    
    // token = strtok(NULL, " "); 
    // puts(token); 
    
    // token = strtok(NULL, " "); 
    // puts(token); 
    
    // token = strtok(NULL, " "); 
    // puts(token); return 0; 
} 