#include<iostream>
using namespace std;

void printN(int N)
{
    if(N)
    {
        printN(N-1);
        cout<<N<<endl;
    }
    return;
}

int main()
{
    int N;
    cin>> N;
    cout<<endl;
    printN(N);

    return 0;
}
