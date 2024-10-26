#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    // int value = a/b;
        double value = (double)a / b;

    printf("floor %d / %d = %0.f\n",a,b, floor(value));
    printf("ceil %d / %d = %0.f\n",a,b, ceil(value));
    printf("round %d / %d = %0.f\n",a,b, round(value));
    return 0;
}
// ceil 10 / 3 = 4
// round 10 / 3 = 3
