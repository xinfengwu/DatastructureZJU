#include<stdio.h>
#include<time.h>

// For loop
void printN(int N)
{
    int i;
    for(i=1;i<=N;i++)
    {
        printf("%d\n",i);
    }
}
// Recursion
void printN_re(int N)
{
    if(N)
    {
        printN_re(N-1);
        printf("%d\n",N);
    }
}

clock_t start, stop;
double duration;

int main()
{
    int N;
    scanf("%d",&N);
    start = clock();// 开始计时
    // printN(N);
    printN_re(N);
    stop = clock();//停止计时
    duration = ((double)(stop-start))/CLOCKS_PER_SEC;//计算运算时间
    printf("Total time taken by CPU: %f\n", duration);
    printf("C Complete!\n");
    return 0;
}
