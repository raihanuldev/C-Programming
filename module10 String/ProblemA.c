#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    char t[1000];
    scanf("%s", s);
    scanf("%s", t);
    int length1 = 0;
    int length2 = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        length1++;
    }
    for (int i = 0; t[i] != '\0'; i++)
    {
        length2++;
    }

    printf("%d %d\n", length1, length2);
    printf("%s %s", s, t);
    return 0;
}