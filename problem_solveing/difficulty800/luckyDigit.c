#include <stdio.h>
#include <string.h>

int main()
{
    long long int n, temp;
    scanf("%lld", &n);
    temp = n;
    // to get length of n;
    int length = 0;
    if (n == 0)
    {
        length = 1;
    }
    else
    {
        while (n != 0)
        {
            n /= 10;
            length++;
        }
    }
    n = temp;

    int count = 0;
    for (int i = 0; i < length; i++)
    {
       long long int main = n / 10;
        int lastDigit = n % 10;
        // printf("%d", lastDigit);
        // printf("%d", main);

        if (lastDigit == 4 || lastDigit == 7)
        {
            count++;
        }

        // printf("%d \n",lastDigit);
        n = main;
    }
    // printf("%d\n", count);

    if (count == 4 || count == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    // printf("\n%d\n", count);

    // printf("%d\n",count);
    // printf("\n%d\n",length);
    return 0;
}