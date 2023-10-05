#include<stdio.h>
int main()
{
    int K;
    scanf("%d",&K);
    int a[K];
    int i;
    for(i=0; i<K; i++)
    {
        scanf("%d",&a[i]);
    }
    int MaxSum=a[0];
    int sum = a[0];
    int m=0;
    int n=0;
    int first_number=a[0];
    int last_number=a[0];
    int isAllNegative=1;
    for(m=0; m<K; m++)
    {
        sum =a[m];
        if(sum > MaxSum)
         {
             MaxSum = sum;
             first_number = a[m];
             last_number = a[m];
         }
        for(n = m + 1; n<K; n++)
        {
             sum += a[n];
             if(sum > MaxSum)
             {
                 MaxSum = sum;
                 first_number = a[m];
                 last_number = a[n];
             }
        }
        if(a[m]>=0)
        {
            isAllNegative = 0;
        }
    }
    if(isAllNegative==1)
    {
        MaxSum = 0;
        first_number = a[0];
        last_number = a[K-1];
    }
    printf("%d %d %d",MaxSum,first_number,last_number);
    return 0;
}
