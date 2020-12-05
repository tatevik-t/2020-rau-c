// 1 + 1/2 + 1/3 + 1/4 ... +1/N 
#include <stdio.h>

double sum(int n){
    if(n == 1){
        return 1;
    }
    double ans;
        ans = 1.0/n + sum(n-1);
        return ans;
}

int main()
{
    
    int n;
    scanf("%d", &n);
    double ans = sum(n);
    printf("%lf", ans);

    return 0;
}