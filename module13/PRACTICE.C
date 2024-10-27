#include <stdio.h>
#include <string.h>

// in this Programm i repeted uniqueStrings
int main(){
    char nam[100] = "brain station";
    int len = strlen(nam);
    // now create a frequncy array
    int f[100] = {0};

    for(int i =0; i<len; i++){
        int index = nam[i] -'a';
        f[index] = 1;
    }
    //printing all array
    for(int i =0; i<26; i++){
        printf("%c %d\n", i+'a', f[i]);
    }
}