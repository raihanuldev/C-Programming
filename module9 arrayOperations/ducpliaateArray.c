#include <stdio.h>

int main(){
    int n,p,q,level;  
    int levels[100];

    //lvels ta input 
    scanf("%d",&n);
    
    scanf("%d",&p);
    for(int i=0; i<p; i++){
        scanf("%d",&level);
        levels[level-1] = 1;
    }
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &level);
        levels[level - 1] = 1;
    }
    for (int i = 0; i < n; i++) {
        if (levels[i] == 0) {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }

    printf("I become the guy.\n");
    return 0;
}

/*

#include <stdio.h>

int main() {
    int n, p, q, i, level;
    int levels[100] = {0};  // To track which levels are covered (max n = 100)

    // Read number of levels in the game
    scanf("%d", &n);

    // Read the levels Little X can pass
    scanf("%d", &p);
    for (i = 0; i < p; i++) {
        scanf("%d", &level);
        levels[level - 1] = 1;  // Mark this level as passed
    }

    // Read the levels Little Y can pass
    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d", &level);
        levels[level - 1] = 1;  // Mark this level as passed
    }

    // Check if all levels from 1 to n are covered
    for (i = 0; i < n; i++) {
        if (levels[i] == 0) {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }

    printf("I become the guy.\n");
    return 0;
}

*/