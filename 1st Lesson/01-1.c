#include<stdio.h>
int MaxSubseqSum(int MaxN, int a[]);
int main()
{
    int MaxN;
    scanf("%d\n",&MaxN);
    int a[MaxN];
    int i;
    for(i=0;i<MaxN;i++)
    {
        scanf("%d",&a[i]);
    }
   
    
    printf("%d",MaxSubseqSum(MaxN, a));
    return 0;
}
int MaxSubseqSum(int MaxN, int a[])
{
  int MaxSum=0;
  int sum=0;
  int i,length;
  // length = sizeof(a)/sizeof(a[0]);//数组长度
  length = MaxN;
  // printf("The length of Array: %d\n",length);
  
   MaxSum = a[0];
  for(i=0; i<length; i++) 
  {
    sum = a[i];
    printf("sum = %d\n",sum);
    int j;
    for(j=i+1; j<length; j++)
    {
      sum += a[j];
      printf("sum = %d\n",sum);
      if(sum > MaxSum)
      {
        MaxSum = sum;
      }
    }
  }
  return MaxSum;
}
