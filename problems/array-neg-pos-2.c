// put negative elements on the right part of array, positive on the left
#include <stdio.h>

int main(void) {
    int a[10] = {0};
    int n = 10;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int pos_idx = 0, neg_idx = n-1;
    while (1) {
        while(a[pos_idx] >= 0)
            pos_idx++;
        while (a[neg_idx] < 0)
            neg_idx--;
        if (pos_idx > neg_idx)
            break;
        int temp = a[pos_idx];
        a[pos_idx] = a[neg_idx];
        a[neg_idx] = temp;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}