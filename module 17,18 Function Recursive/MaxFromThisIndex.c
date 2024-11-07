    #include <stdio.h>
    int a[1001];

    int maxThisIndex(int index,int n){
        if(index == n-1){
            return a[index];  
        }

        int right_max = maxThisIndex(index+1,n);

        if(right_max > a[index]){
            return right_max;
        }else{
            return a[index];
        }

    }

    int main(){
        int n;
        scanf("%d",&n);
        for(int i =0; i<n; i++){
            scanf("%d",&a[i]);
        }
        printf("%d",maxThisIndex(0,n));
    }