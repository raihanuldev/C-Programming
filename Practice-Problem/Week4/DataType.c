
#include <stdio.h>

int main()
{

    int intN;
    long long int lNumber;
    char name;
    float floating;
    double testDouble;

    scanf("%d %lld %c %f %lf", &intN, &lNumber, &name, &floating, &testDouble);

    printf("%d\n%lld\n%c\n%.2f\n%.1lf\n", intN, lNumber, name, floating, testDouble);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B
