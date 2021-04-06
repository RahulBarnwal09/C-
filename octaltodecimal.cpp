#include<iostream>
using namespace std;
int octaltodecimal(int n)
{
  int sum=0;
  int x=1; // This is actually 2 raised to the power zero

  while(n>0)
  {
      int m=n%10;
      sum=sum+x*m;
      x=8*x;
      n=n/10;

  }
  return sum;


}
int main()
{
    int n,m;
    cin>>n;
    m=octaltodecimal(n);
    cout<<m;
    cout<<endl;
    return 0;
}