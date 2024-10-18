#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Variables to store counts of 4's and 7's
    int count7 = n / 7; // Start with the maximum possible number of 7's
    while (count7 >= 0) {
        int remainder = n - count7 * 7;
        if (remainder % 4 == 0) {
            int count4 = remainder / 4;
            // Print the lexicographically smallest number with count4 4's and count7 7's
            for (int i = 0; i < count4; i++) {
                printf("4");
            }
            for (int i = 0; i < count7; i++) {
                printf("7");
            }
            printf("\n");
            return 0;
        }
        count7--; // Reduce number of 7's and try again
    }

    // If no combination was found, print -1
    printf("-1\n");

    return 0;
}
