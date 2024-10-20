#include <stdio.h>
#include <string.h>

int main()
{

    char a[11], b[11];
    scanf("%s", a);
    scanf("%s", b);

    int sizeOfA = strlen(a);
    int sizeOfB = strlen(b);

    printf("%d %d\n", sizeOfA, sizeOfB);
    printf("%s%s\n", a, b);
    // reverse
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s",a,b);
     return 0;
}