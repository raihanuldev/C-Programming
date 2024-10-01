#include <stdio.h>

int main(){
    int fristNumber,secoundNumber;
    float floateFrist,FloateSecound;
    scanf("%d %d", &fristNumber,&secoundNumber);
    scanf("%f %f", &floateFrist,&FloateSecound);
    printf("%d %d \n", fristNumber+secoundNumber ,fristNumber-secoundNumber);
    printf("%.1f %.1f \n", floateFrist+FloateSecound ,floateFrist-FloateSecound);
}