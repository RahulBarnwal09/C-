/* 1    0C0
  1 1   1C0 1C1
 1 2 1  2C0 2C1 2C2.....  C -> Combination
1 3 3 1 etc. */
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
    int n;
    cin>>n;
    for(int i=0;i<=n;i++) // loop starts from 0 as in 1st line there is "1" which is equal to 0C0
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}