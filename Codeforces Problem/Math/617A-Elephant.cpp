#include<iostream>
using namespace std;

int main()
{   
    int n,ans=0,i=5;
    cin>>n;
    while(n>0)
    {
      if(n>=i)
      {
        n=n-i;
        ans++;
        continue;
      }
      i--;
    }
    cout<<ans;
}
