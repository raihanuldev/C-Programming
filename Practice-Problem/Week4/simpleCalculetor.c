#include <stdio.h>

int main() {
    long long int x, y;
    scanf("%d %d", &x, &y);

    // Ensure multiplication is done with long long int to prevent overflow
    long long int multiply = (long long int)x * y;
    long long int sum = (long long int)x + y;

    // Print results
    printf("%d + %d = %lld\n", x, y, sum);
    printf("%d * %d = %lld\n", x, y, multiply);
    printf("%d - %d = %d\n", x, y, x - y);

    return 0;
}
