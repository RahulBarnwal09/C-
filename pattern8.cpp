#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=1;
    cin>>n;
    for(int i=1;i<=n;i++) //Sub Pattern 1
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }cout<<endl;
    }
     for(int i=1;i<=n;i++) //Sub Pattern 2
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }cout<<endl;
    }
     for(int i=1;i<=n;i++) //Sub Pattern 3
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count;
            count++;
        }cout<<endl;
    }
     for(int i=n;i>0;i--) //Sub Pattern 4
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }cout<<endl;
    }
return 0;
}