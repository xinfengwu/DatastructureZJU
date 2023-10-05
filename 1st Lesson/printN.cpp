#include<iostream>
using namespace std;
// Recursion
void printN_re(int N)
{
    if(N)
    {
        printN_re(N-1);
        cout<<N<<endl;
    }
}

// For loop
void printN(int N)
{
    int i;
    for(i=1;i<=N;i++)
    {
        cout<<i<<endl;
    }
}
int main()
{
    int N;
    cin>> N;
    cout<<endl;
    printN(N);
//     printN_re(N);

    cout<<"C++ Complete!"<<endl;
    return 0;
}
