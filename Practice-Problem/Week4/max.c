#include <stdio.h>

int main()
{
    int tcase;

    scanf("%d", &tcase);
    int n[tcase];
    for (int i = 0; i < tcase; i++)
    {

        scanf("%d", &n[i]);
    }
    int max = n[0];
    for (int i = 0; i < tcase; i++)
    {
        if (max < n[i])
        {
            max = n[i];
        }
    }
    printf("%d ", max);
    return 0;
}