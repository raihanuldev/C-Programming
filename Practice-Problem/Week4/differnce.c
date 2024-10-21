#include <stdio.h>

int main(){
    int a,b,c,d;
    long long int x;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    
    x = (long long int)a*b-(long long int)c*d;
    printf("Difference = %lld", x);

    return 0;
}
