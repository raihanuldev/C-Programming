#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i =0; i<n; i++){
        int inputValue;
        scanf("%d",&inputValue);
        int lastvalue = inputValue%10;
        int frist = inputValue/10;
        printf("%d\n",frist+lastvalue);

    }

    return 0;
}