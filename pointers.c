#include <stdio.h>

int main(){
    int x = 5;

    // the pointer takes the address(&) of the segment in memory where x variable is stored
    // the pointer has its own type (int*) [type of the variable it refers to]*
    int* ptr_int = &x;
    
    // the pointer can also point the pointer refering to his address, type is [type of the variable]**
    int** ptr_ptr_int = &ptr_int;
    
    // to print the pointer value, you can use either %u (as unsigned int) or %p (pointer, prints hexademical value)
    // %p is better
    printf("%p\n", ptr_int);
    printf("%p\n", &x); // the same thing, the address of x
    
    // to dereference the pointer (get the value it is pointing to) use * before the pointer name
    printf("%d\n", *ptr_int);
    printf("%d\n", x); // the same thing
    
    // for double dereference use **
    printf("%d\n", **ptr_ptr_int);
    printf("%d\n", x); // the same thing

    return 0;
}
