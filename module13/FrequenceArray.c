#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n] = {0};

    for(int i = 0; i< n; i++){
        scanf("%d",&a[i]);
    }
    // 
    // int b[100000];
    // for(int i = 0; i<n; i++){
    //     b[a[i]] =1;
    // }

    for(int i =0; i<10; i++){
        printf("%d ", a[i]);
    }

    return 0;
}