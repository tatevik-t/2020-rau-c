// Опишите функцию, которая принимает в качестве аргумента массив целых чисел 
// и выяснить, является ли самый большой элемент массива симметричным или нет. 

#include<stdio.h>

int maxElem(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int isSymmetric(int n){
    int inv_n = 0;
    int notinv_n = n;
    while(n){
        inv_n *= 10;
        inv_n += n%10;
        n /= 10;
    }
    return inv_n == notinv_n;
}

int maxElemIsSymmetric(int arr[], int size){
    int max = maxElem(arr, size);
    return isSymmetric(max);
}

int main(){
    const int size = 5;
    int arr[] = {12,13,143,15,121};
    int ans = maxElemIsSymmetric(arr, size);
    if(ans == 1){
        printf("The max element is symmetric\n");
    }
    else{
        printf("The max element is not symmetric\n");
    }
    return 0;
}