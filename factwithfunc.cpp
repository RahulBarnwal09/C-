#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main()
{
    int n,x;
    cin>>n;
    x=fact(n);
    cout<<x<<endl;
    return 0;
}