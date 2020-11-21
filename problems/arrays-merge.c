// Соединить (merge) два отсортированных массива так, 
// чтобы результат был отсортированным. 

#include <stdio.h>

int main()
{
    const int n1 = 5, n2 = 7, N = n1+n2;
    int arr1[n1], arr2[n2], A[N];
    for(int i = 0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }
      for(int i = 0; i<n2; i++){
        scanf("%d", &arr2[i]);
    } 
    int j = 0, k = 0, indA = 0; 
    while(j < n1 && k < n2){
        if(arr1[j]<arr2[k]){
            A[indA] = arr1[j];
            j++;
        }
        else{
            A[indA] = arr2[k];
            k++;
            
        }
        indA++;
    }
    while(k < n2){
        A[indA] = arr2[k];
        indA++;
        k++;
    }
    while(j < n1){
        A[indA] = arr1[j];
        indA++;
        j++;
    } 
    for(int i = 0; i < N; i++){
        printf("%d ", A[i]);
    }
    return 0;
}