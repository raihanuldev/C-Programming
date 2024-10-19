#include <stdio.h>

int main(){
    int a[100],b[100];
    int length=0,length2=0;
    scanf("%d",&length);

    for(int i = 0; i<length; i++)
    {
        scanf("%d", &a[i]);
    }
    // printOut a &b
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", b[i]);
    }
    
    return 0;
}

// bhai eikahne ami jokon b er value 100 deaclr kore die tokon random value ase
// abr jokon 10^5 declare kori tokon 0 ase. 
// behined the seen keno esob hocce? kindly explain kore den tahole valo hoto.
