#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int year = n / 365;
    int remaing_days = n%365;
    int month = remaing_days/30;
    int days = remaing_days%30;

    printf("%d years\n", year);
    printf("%d months\n", month);

    printf("%d days\n", days);
    return 0;
}