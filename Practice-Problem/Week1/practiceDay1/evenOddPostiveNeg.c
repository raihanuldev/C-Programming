#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // declare some variables for positive,negative,even,odd
    int even = 0;
    int odd = 0;
    int postive = 0;
    int negative = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
        if (a[i] < 0)
        {
            negative += 1;
        }
        if (a[i] > 0)
        {
            postive += 1;
        }
    }
    // print four line
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", postive);
    printf("Negative: %d\n", negative);
}