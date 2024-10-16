#include <stdio.h>

int main(){
    int testcase;
    scanf("%d",&testcase);
    for(int cs =0; cs<testcase; cs++){
        int n;
        scanf("%d", &n);
       long long factorial=1;

        for(int i=1; i<=n;i++){
            factorial = factorial*i;
        }
        printf("%lld\n", factorial);
    }

    return 0;
}