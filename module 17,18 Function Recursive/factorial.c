#include <stdio.h>

long long int factorial(n){
    if(n==0)return 1;
    return n*(factorial(n-1));
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lld\n", factorial(n));
    return 0;
}