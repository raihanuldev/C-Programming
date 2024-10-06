#include <stdio.h>
int main()
{
    long long int cnn;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            for (int k = 1; k < 10; k++)
            {
                cnn++;
            }
            printf("%lld\n", cnn);
        }
        printf("%lld\n", cnn);
    }
}