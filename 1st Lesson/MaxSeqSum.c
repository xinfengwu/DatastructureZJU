#include<stdio.h>

#define MaxN 1000000
double MaxSubseqSum(int a[]);
int main()
{

  int b[MaxN];
  int m;
  for(m=0;m<MaxN;m++)
  {
    b[m]=m+1;
    // printf("%d\n",a[m]);
  }
  printf("The max sum of sub sequence is: %lf\n",MaxSubseqSum(b));
}
double MaxSubseqSum(int a[])
{
  double MaxSum=0;
  double sum_l, sum_r=0;
  int i,length;
  // length = sizeof(a)/sizeof(a[0]);//数组长度
  length = MaxN;
  printf("The length of Array: %d\n",length);
  for(i=0; i<length; i++) 
  {
    sum_l += a[i];
    sum_r = sum_l;
    // printf("sum_l = %lf\n",sum_l);
    int j;
    for(j=i+1; j<length; j++)
    {
      sum_r += a[j];
      // printf("sum_r = %lf\n",sum_r);
      if(sum_l<sum_r)
      {
        MaxSum = sum_r;
        i=j;
        continue;
      }
      else
      {
        MaxSum = sum_l;
      }
    }
  }
  return MaxSum;
}
