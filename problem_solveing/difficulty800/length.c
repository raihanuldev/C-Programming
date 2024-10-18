#include <stdio.h>

int main(){
    long long int n, temp;
    scanf("%lld", &n);
    int count = 0;
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
    printf("%d\n",length);
}