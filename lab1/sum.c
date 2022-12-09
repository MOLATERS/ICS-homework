#include <stdio.h>

int sum(int a[], int len)
{
    int i, sum = 0;
    for (i = 0; i <= len - 1; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main ()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    printf("%d",sum(a,0));
    return sum(a,0);
}