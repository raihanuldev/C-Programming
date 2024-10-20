#include <stdio.h>

int main()
{
    int a[100000], b[100000];
    int length1 = 0, length2 = 0;

    scanf("%d", &length1);
    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }

    int index, value;
    scanf("%d %d", &index, &value);
    length1++;

    for (int i = length1 - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }
    a[index] = value;
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}