#include <stdio.h>
#include <string.h>

int main()
{
    // int n;
    // scanf("%d",&n);
    char s[51], t[51];
    scanf("%s %s", s, t);

    int sLen = strlen(s);
    int tLen = strlen(t);

    if (sLen >= tLen)
    {
        // jodi s size besi hoi.
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (t[i] != '\0')
            {
                printf("%c%c", s[i], t[i]);
            }
            else
            {
                printf("%c", s[i]);
            }
        }
    }
    else
    {
        // t len jodi bodo hoi tahole eita hobe.
        for (int i = 0; t[i] != '\0'; i++)
        {
            if (s[i] != '\0')
            {
                printf("%c%c", s[i], t[i]);
            }
            else
            {
                printf("%c", t[i]);
            }
        }
    }

    return 0;
}