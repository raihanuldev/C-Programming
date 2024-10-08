#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[5];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
     int sum;
    for(int i=0; i<n;i++){
        sum = sum+a[i];
        // printf("%d \n", a[i]);
        // printf("%d \n", sum);
    }
    printf("%d ", sum);
    return 0;
}