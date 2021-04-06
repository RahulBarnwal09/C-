#include<iostream>
using namespace std;
int decimaltobinary(int n)
{
    int x=1;
    int sum=0;
    while(x<=n)
    {
        x=2*x;//taking highest power of 2 which is less than n
    }
    x=x/2;// x is divided by 2 as the value of x exceeds the value of n
    while(x>0)
    {
        int lstdigit=n/x;
        n=n-lstdigit*x;
        x=x/2;
        sum=sum*10+lstdigit;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<decimaltobinary(n)<<endl;
    return 0;
}