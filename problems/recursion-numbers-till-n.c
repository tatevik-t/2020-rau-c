//print numbers from 1 to n using recursion

#include <stdio.h>

void printNums(int n){
    if(n == 0){
        return;
    }
    printNums(n - 1);
    printf("%d ", n);
}

int main(){
    printNums(10);
}