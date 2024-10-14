#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int salami[n];
    for(int i=0; i<n;i++){
        scanf("%d",&salami[i]);
    }

    for(int i=0; i<n;i++){
        printf("%d ", salami[i]);
    }

    return 0;
}