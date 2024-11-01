#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i =0; i<n; i++){
        int frist;
        int secound;
        scanf("%d",&frist);
        scanf("%d",&secound);
        int result = frist-secound;
        printf("%d\n",abs(result));

    }

    return 0;
}