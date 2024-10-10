#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + numbers[i];
    }
    printf("%lld", llabs(sum));

    return 0;
}