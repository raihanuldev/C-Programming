#include <stdio.h>

int main()
{
    int a = 5;
    int b = 1;
    int c = 3;
    if (a > b && b > c)
    {
        printf("%d", a);
    }
    else if (b > a && c > b)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }
}