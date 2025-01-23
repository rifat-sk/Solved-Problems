#include<iomanip>
#include<iostream>
int main()
{
  int x,p;
 long double ans=0;
 cin>>x;
 for(int i=1;i<=x;i++)
 {
    cin>>p;
    ans=p+ans;
 }
 cout<<fixed<<setprecision(12)<<ans/x;
}

