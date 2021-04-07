#include<iostream>
using namespace std;
int main()
{
    int n,counter;
    cout<<"Enter elements in array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    counter=1;
    while(counter<n)
    {
        for(int i=1;i<n-counter;i++)
        {
           if(a[i]>a[i+1])
           {
               int temp;
               temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
           }
        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}