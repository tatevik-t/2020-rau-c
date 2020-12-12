// delete all "th" elements from the string

#include <stdio.h>
#include <string.h>

int main(){
    char str[40];
    fgets(str, 40, stdin);
    // for(int i = 0; i < strlen(str)-1; i++)
    //     if(str[i] == 't' && str[i+1] == 'h')
    //        for(int j = i; j < strlen(str)-1; j++)
    //            str[j] = str[j+2];
    // puts(str);

    // with strstr()
    char* p = strstr(str, "th");
    while(p){
        strcpy(p, p+2);
        p = strstr(p, "th");
    }

    puts(str);
    return 0;
}