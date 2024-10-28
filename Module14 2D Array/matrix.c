#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    // take input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int primarySum = 0;
    int secoundrySum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primarySum += a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i + j == n - 1)
            {
                secoundrySum += a[i][j];
            }
        }
    }

    int result = primarySum -+ secoundrySum;

    printf("%d", abs(result));
    return 0;
}