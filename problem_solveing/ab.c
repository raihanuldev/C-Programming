#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ab;
    for(int i=0; i<n; i++){
        
        scanf("%d",&ab);
        int b = ab % 10;
        int a = ab/10;
        printf("%d\n", a+b);
    }
}