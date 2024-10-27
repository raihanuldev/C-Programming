#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char str[100001];
    int antikCount = 0;
    int danikCount = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        {
            antikCount++;
        }
        if (str[i] == 'D')
        {
            danikCount++;
        }
    }
    if (antikCount == danikCount)
    {
        printf("Friendship\n");
    }

    else if (antikCount > danikCount)
    {
        printf("Anton\n");
    }
    else if (danikCount > antikCount)
    {
        printf("Danik\n");
    }
}