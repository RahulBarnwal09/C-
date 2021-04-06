#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxofarray=INT_MIN;
    int minofarray=INT_MAX;
    for(int i=1;i<n;i++)
    {
        maxofarray=max(maxofarray,a[i]);
        minofarray=min(minofarray,a[i]);
    }
    cout<<maxofarray<<" "<<minofarray<<endl;
    return 0;
}