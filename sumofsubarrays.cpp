#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements in arrays: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+a[j];

        }
        cout<<"The sum of subarrays is: "<<sum;
            cout<<endl;
    }

    return 0;
}