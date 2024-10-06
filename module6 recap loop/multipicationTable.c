#include <stdio.h>
int main()
{
    int n = 3;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %2d = %d\n", i, j, j * i);
        }
        printf("new Mission started\n\n");
    }
}