#include <stdio.h>

int main()
{
    int day = 6;

    switch (day)
    {
    case 1:
        printf("Saturday\n");
        break;
    case 2:
        printf("Sunday \n");
        break;
    case 3:
        printf("MONDAY \n");
        break;
    case 4:
        printf("ThesDay \n");
        break;
    case 5:
        printf("Wedenday");
        break;
    case 6:
        printf("Thursday");
        break;
    case 7:
        printf("Friday");
        break;
    default:
        printf("wrong Day");
        break;
    }
}