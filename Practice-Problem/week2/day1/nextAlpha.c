#include <stdio.h>

int main()
{
    char aplha;
    int nextAlpha;
    scanf("%c", &aplha);
    if (aplha == 'z')
    {
        nextAlpha = 97;
    }
    else
    {
        nextAlpha = aplha + 1;
    }
    printf("%c", nextAlpha);
    return 0;
}