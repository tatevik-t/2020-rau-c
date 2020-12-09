#include <stdio.h>
#include <string.h>

int main(void){
    char str1[20] = "C programming";
    char str2[20];

    // copying str1 to str2
    strcpy(str2, str1);
    printf("%s\n", str2);

    //concatenate str1 and str2
    strcat(str1, str2);
    printf("%s\n", str1);

    // length of string
    printf("The lenhgth of str1 is %lu\n", strlen(str1));
    
    // comparison
    printf("Result of comparison for str1 and str2: %d\n", strcmp(str1, str2));

    // searchs for the first occurence of 'p'
    char *ret = strchr(str2, 'p');
    printf("String after 'p' (included) is '%s'\n", ret);

    // searchs for the first occurence of 'prog'
    char *ret_str = strstr(str2, "prog");
    printf("String after 'prog' (included) is '%s'\n", ret_str);

    return 0; 
}