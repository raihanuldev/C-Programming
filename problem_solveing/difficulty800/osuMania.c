#include <stdio.h>
#include <string.h>
int main(){
    int tcase;
    scanf("%d",&tcase);

    for(int i =0; i<tcase; i++){
        int n;
        scanf("%d",&n);
        int positions[500];

         for (int i = 0; i < n; i++) {
            char str[5];  
            scanf("%s", str);
            
            for (int j = 0; j < 4; j++) {
                if (str[j] == '#') {
                    positions[n - i - 1] = j + 1; 
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    }

    return 0;
}