#include <stdio.h>



int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}


void equation(int x, int n) {
    int sum = 0;
    for (int i = 0; i <= n; i += 2) {
        sum += power(x, i);
    }
    printf("%d\n", sum);
}

int main() {
    int x, n;
    scanf("%d %d", &x, &n); 
    equation(x, n);    
    return 0;
}