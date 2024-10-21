#include <stdio.h>
#include <string.h>

int main(){
    char example[10000];
    // scanf("%s",example);
    fgets(example,sizeof(example),stdin);
    printf("%d",strlen(example));
    return 0;
}