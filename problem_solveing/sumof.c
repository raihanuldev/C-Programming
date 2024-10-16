#include <stdio.h>

int main()
{
    int testcase;
    scanf("%d", &testcase);

    for (int i = 0; i < testcase; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x > y)
        {
            int soap = x;
            x = y;
            y = soap;
        }

        int sum = 0;

        for (int j = x + 1; j < y; j++)
        {

            if (j % 2 != 0)
            {
                sum += j;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}