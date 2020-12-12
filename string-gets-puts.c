#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    //scanf("%s", str); //doesn't get the whitespace
    
    // "enter" as string end
    gets(str);
    puts(str);
    
    // but get() is dangerous (compilator anonces a warning) 
    // when the length of the stroke is greater than array
    // the program raises an error
    // due to stack's logic

    // another function, that also takes the length of str (with "enter") 
    // and from where to read (for example from file)
    fgets(str, 10, stdin);
    printf("%lu\n", strlen(str));
    fputs(str, stdout);
    
    return 0;
}

// была heartbleed уязвимость из-за отсуствия проверки длины строки