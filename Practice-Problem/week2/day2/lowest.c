#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int postion = 1;
    int lowest = a[0];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < lowest)
        {
            lowest = a[i];
            postion = i + 1;
        }
    }

    printf("%d %d", lowest, postion);   

    return 0;
}