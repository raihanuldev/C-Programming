#include <stdio.h>

int main(){
    int A;
    long long int B;
    float C;
    char D;
    scanf("%d\n",&A);
    scanf("%lld\n",&B);
    scanf("%f\n",&C);
    scanf("%c\n",&D);
    
    printf("%d\n",A);
    printf("%lld\n",B);
    printf("%.2f\n",C);
    printf("%c\n",D);
    return 0;
}