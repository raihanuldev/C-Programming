#include <stdio.h>

int main(){
    int n;
    scanf("%d ",&n);
    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int min=a[0],frequency=0;
    for(int i=0; i<n; i++){
        if(a[i] <min){
            min = a[i];
        }
    }

    for(int i =0; i<n; i++){
        if(a[i] ==min){
            frequency++;
        }
    }
    if(frequency%2==0){
        printf("Unlucky");
    }else{
        printf("Lucky");
    }
    return 0;
}