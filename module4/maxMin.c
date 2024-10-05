#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int min = A;
    // find minimam number
    if (B < min)
    {
        min = B;
    }
    if (C < min)
    {
        min = C;
    }

    // maximum number
    int max = A;
    if (B > max)
    {
        max = B;
    }
    if (C > max)
    {
        max = C;
    }
    printf("%d %d\n", min, max);
}