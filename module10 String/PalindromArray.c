#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    int num1[100000], num2[100000];
    for(int i=0; i<n; i++){
        scanf("%d",&num1[i]);
    }

    for(int i =0,j=n-1; i<n; i++,j--){
        num2[j] = num1[i];
    }
    int is_polindrome =0;
    for(int i =0; i<n; i++){
        if(num1[i]!=num2[i]){
            is_polindrome =0;
            break;
        }else{
            is_polindrome =1;
        }
    }
    if(is_polindrome){
        printf("YES");
    }else{
        printf("NO");
    }


    return 0;
}