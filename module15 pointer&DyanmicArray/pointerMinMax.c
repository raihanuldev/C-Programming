#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int *xp = &x;
    int *yp = &y;
    int *zp = &z;
    // int min = *xP;
    // int max = *xP;

    if (*xp < *yp && *xp < zp)
    {
        printf("%d ", *xp);
    }
    else if (*yp < *xp && *yp < *zp)
    {
        printf("%d ", *yp);
    }
    else
    {
        printf("%d ", *zp);
    }
    //for max
    if (*xp > *yp && *xp > zp)
    {
        printf("%d ", *xp);
    }
    else if (*yp > *xp && *yp > *zp)
    {
        printf("%d ", *yp);
    }
    else
    {
        printf("%d ", *zp);
    }
    return 0;
}