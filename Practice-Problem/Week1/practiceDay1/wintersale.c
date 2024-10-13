#include <stdio.h>

int main() {
    int x, p;
    scanf("%d %d", &x, &p);  // Read the discount percentage and price after discount
    float discountFactor = 1 - (x / 100.0);  // Correct percentage calculation
    float originalPrice = p / discountFactor;  // Apply the formula to find the original price
    printf("%.2f\n", originalPrice);  // Print the original price rounded to 2 decimal places
    return 0;
}
