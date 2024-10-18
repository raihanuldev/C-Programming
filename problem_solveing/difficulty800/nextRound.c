#include <stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    int selectedPlayer=0;

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int passScore = a[k-1];
    for(int i=0; i<n; i++){
        if(a[i]==0){
            break;
        }
        if(a[i]>= passScore){
            selectedPlayer++;
        }
    }
    printf("%d\n",selectedPlayer);
}