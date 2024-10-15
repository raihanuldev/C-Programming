#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    if (x >96 && 123>x)
    {
        printf("%c", x-32);
    }
    else
    {
        printf("%c", x+32);
    }
    return 0;
}