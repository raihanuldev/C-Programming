#include <stdio.h>

int main()
{
    int n;
    int evenCount=0,OddCount=0,negativeCount=0,postiveCount=0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        // printf("%d ", x);
        if(x%2==0){
            evenCount++;
        }else{
            OddCount++;
        }
        if(x>0){
            postiveCount++;
        }
        else if(x<0){
            negativeCount++;
        }
    }
    printf("Even %d\n",evenCount);
    printf("Odd %d\n",OddCount);
    printf("Negative %d\n",negativeCount);
    printf("Positive %d\n",postiveCount);
}