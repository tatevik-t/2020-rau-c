// Разделить четные и нечетные элементы массива в 2 разных массива.
// Размер полученных массив равен размеру исходного массива.

#include <stdio.h>

int main(){
    const int size = 10;
    // 99 standart will cause an error
    // gdbonline too :(
    int a[size], odds[size] = {}, evens[size] = {};
    for (int i = 0; i < size; i++){
        scanf("%d", &a[i]);
    }

    int odd_idx = 0;
    int even_idx = 0;

    for (int i = 0; i < size; i++){
        if(a[i] %2 == 0){
            evens[even_idx] = a[i];
            even_idx++;
        }else{
            odds[odd_idx] = a[i];
            odd_idx++;
        }
    }

    for(int i = 0; i < even_idx; i++){
        printf("%d ", evens[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < odd_idx; i++){
        printf("%d ", odds[i]);
    }
    
    return 0;
}