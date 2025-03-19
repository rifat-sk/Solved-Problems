#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--)
   {
      long long a,b;
      cin>>a>>b;
      long long price1,price2;
      cin>>price1>>price2;
      long long max,min,ans=0;
      if(a>b)
      {
         max=a;
         min=b;
      }
      else{
         max=b;
         min=a;
      }
      if(min==max)
      {
        (min*price2<2*min*price1)?cout<<min*price2<<endl:cout<<2*min*price1<<endl;
      }
      else
      {
         long long k=max-min;
         ans+=k*price1;
         ans+=(min*price2<2*min*price1)?min*price2:2*min*price1;
         cout<<ans<<endl;
      }
   }
}
