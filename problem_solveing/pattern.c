#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1, k=1; i <= n; i++, k+=2)
    {
        int space = n-i;
        while(space--){
            printf(" ");
        }
        for(int j=1; j<=k; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
   *         1
  ***        3
 *****       5
*******      7
*******      7
 *****       5
  ***        3
   *         1

*/