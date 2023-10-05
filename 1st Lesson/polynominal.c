#include <stdio.h>
#include <time.h>
#include <math.h>

double f1(int n, double a[], double x)
{
   int i;
   double p = a[0];
   for(i=1; i<=n; i++)
   {
      p += (a[i] * pow(x,i));
   }
   return p;
}

double f2(int n, double a[], double x)
{
   int i;
   double p = a[n];
   for(i=n;i>0;i--)
   {
      p = a[i-1]+ x*p;
   }
   return p;
}

int main()
{
  clock_t start, stop;
  double duration;
  #define MAXN 1000000 //多项式最大项数，即多项式阶数+1
  double a[MAXN];
  int i;
  for(i=0; i<MAXN; i++)
  {
    // a[i]=(double)i;
    a[i]=1.0 * i;
  }
  
  start = clock();
  f1(MAXN-1, a, 1.1);
  stop = clock();
  duration = (double)(stop - start)/CLOCKS_PER_SEC;
  printf("Total time of Function f1 taken by CPU: %f\n", duration);
  
  start = clock();
  f2(MAXN-1, a, 1.1);
  stop = clock();
  duration = (double)(stop - start)/CLOCKS_PER_SEC;
  printf("Total time of Function f2 taken by CPU: %f\n", duration);
}
