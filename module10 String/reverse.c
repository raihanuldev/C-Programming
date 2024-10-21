#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    char r[1001];
    int len = strlen(s);

    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        r[i] = s[j];
    }

    r[len] = '\0';

    if (strcmp(s, r) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}