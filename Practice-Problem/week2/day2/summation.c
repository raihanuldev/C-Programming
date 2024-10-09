#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + numbers[i];
    }
    if (sum < 0)
    {
        printf("%d", sum * -1);
    }
    else
    {

        printf("%d", sum);
    }

    return 0;
}