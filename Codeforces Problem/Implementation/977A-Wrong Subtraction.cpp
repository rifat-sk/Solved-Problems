#include<iostream>
#include<algorithm>
using namespace std;

int main()
{   
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++)
    {
      (n%10==0)?n=n/10:n=n-1;
    }
    cout<<n;
}
