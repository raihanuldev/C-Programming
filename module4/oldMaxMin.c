#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A < B && A < C)
    {
        printf("%d", A);
        if (A > B && A > C)
        {
            printf(" %d", A);
        }
        else if (B > A && B > C)
        {
            printf(" %d", B);
        }
        else if (C > A && C > B)
        {
            printf(" %d", C);
        }
    }
    else if (B < A && B < C)
    {
        printf("%d", B);
        if (A > B && A > C)
        {
            printf(" %d", A);
        }
        else if (B > A && B > C)
        {
            printf(" %d", B);
        }
        else if (C > A && C > B)
        {
            printf(" %d", C);
        }
    }
    else if (C < A && C < B)
    {
        printf("%d", C);
        if (A > B && A > C)
        {
            printf(" %d", A);
        }
        else if (B > A && B > C)
        {
            printf(" %d", B);
        }
        else if (C > A && C > B)
        {
            printf(" %d", C);
        }
    }
}