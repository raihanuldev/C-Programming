#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min=a[0];
    int max = a[1];

    for(int i=0; i<n;i++){
        if(min>a[i]){
            min = a[i];
        }
        if(max>a[i]){
            max =a[i];
        }
    }
    printf("%d %d", min,max);
    return 0;
}