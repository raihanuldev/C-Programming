#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int A[n];
    int x;
    int position = -1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (A[i] == x)
        {
            position = i;
            break;
        }
    }
    if (position != -1)
    {
        printf("%d", position);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}