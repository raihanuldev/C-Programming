#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    
    for(int i =0; i<n; i++){
        char s[51];
        char t[51];
        scanf("%s %s", s,t);

        for(int j =0; j <strlen(s); j++){
            printf("%c",s[j]);
        }

        // printf("%s " ,s);
    }

    return 0;
}


// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K\
