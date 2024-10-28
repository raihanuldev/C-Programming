#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i =0; i<n; i++){

        for(int j =0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int x;
    int flag = 0;
    scanf("%d",&x);
    for(int i =0; i<n; i++){

        for(int j =0; j<m; j++){
            // printf("%d ",a[i][j]);
            if(a[i][j] ==x){
                flag =1;
            }
        }
        
    }
    if(flag ==1){
        printf("will not take number");
    }else{
        printf("will take number");
    }
    return 0;
}