#include <stdio.h>

int main()
{
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);
    if(a<= -1 || b<=-1 || k<= -1){
        return 0;
    }

    if (a % k == 0 && b % k == 0)
    {
        printf("Both");
        return 0;
    }
    if (a % k == 0)
    {
        printf("Memo");
        return 0;
    }
    if (b % k == 0)
    {
        printf("Momo");
        return 0;
    }
    else
    {
        printf("No One");
    }

    return 0;
}