#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int books[n];
    int t;
    scanf("%d", &t);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &books[i]);
    }
    int count = 0;
     int sum = 1;
    for (int i = 0; i < n; i++)
    {
        
        sum += books[i];
        // printf("%d\n",sum);
        count++;
        if(sum==t){
            printf("%d",count);
            break;
        }
    }
    return 0;
}