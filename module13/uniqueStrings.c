#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "apple";
    int len = strlen(str);
    int f[26] = {0};

    for (int i = 0; i < len; i++)
    {
        int index = str[i] -'a';
        f[index] = 1;
    }

    for(int i =0; i<26; i++){
        printf("%c %d\n",i+'a',f[i]);
    }

    return 0;
}