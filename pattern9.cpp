#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }cout<<endl;
    }
    return 0; //Here I am printing a pattern consisting of 0 and 1. 1 is printed in those place only where sum of row and column is even otherwise 0 is printed.
}