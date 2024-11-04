#include <stdio.h>

void N1(int x,int n){
    if(x>n) return 0;
    N1(x+1,n);
    
    printf("%d \n",x);
}

int main(){
    N1(1,10);


    return 0;
}


// #include <stdio.h>

// void N1(n){
//     if(n==0)return 0;
//     printf("%d \n",n);
//     N1(n-1);
// }

// int main(){
//     N1(10);


//     return 0;
// }