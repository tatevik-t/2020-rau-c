#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100] = "  This .is  a string";

  for(char * p = strtok(str, " "); p != NULL; p = strtok(NULL, " ")) {
    printf("%s\n", p);
    printf("%s\n", str);
  }

  return 0;
}