#include <stdio.h>
#include <string.h>

int main()
{   int n;
    scanf("%d", &n);
    char input[n];
    scanf("%s", input);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] =input[i]-'0';
    }



    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("%lld\n",sum);
    return 0;
}