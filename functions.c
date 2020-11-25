// С - процедурный язык программирования
// то есть большую задачу можно разделить на маленькие, отдельно их решить, а потом объединиить

// функция - это часть кода, которая может получить сколько угодно аргументов и выдать один (!) результат
// функция - это последовательность, которая может быть вызвана из любой точки программы
// функция позволяет избежать повторений кода

#include <stdio.h>

// you need to write the function before the main functions (if you write after, the compiler will give a warning)
// [type of returned value (void for no-return)] [name of function] ([type of 1st arg][name of 1st arg], [type of 2nd arg][name of 2nd arg],...)
int max(int x, int y){
    if(x > y){
        return x; // returns value of x and the function stops working
    }
    else{
        return y; // returns value of y and the function stops working
    }
}
// alternative way (because return stops the function)
int max1(int x, int y){
    if(x > y){
        return x; // returns value of x and the function stops working
    }
    return y; // returns value of y and the function stops working
}

// prototype of a function (like a declaring a function)
// [type of returned value] [name of function] ([type of 1st ar][name of 1st argument], [type of 2nd ar][name of 2nd argument...)
// int max(int x, int y);

int main(){
    int a = 10;
    int b = 20;
    int m = max(a,b);  // the function call
    printf("%d\n", m);
    // there are also built-in functions or from library
    // for example 
    // pow(x,y);
    return 0;
}