#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int secound_digit = n % 10;
    int frist_digit = n / 10;
    // corner case eita, alada bhabe handle korte hobe must
    if (secound_digit == 0)
    {
        printf("YES\n");
    }
    else if (frist_digit % secound_digit == 0 || secound_digit % frist_digit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}