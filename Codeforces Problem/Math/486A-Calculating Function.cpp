#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{   
 long long n,sin=1,ans=0;
 cin>>n;
 if(n%2!=0)sin=-1;
 ans=sin*ceil((float)n/2);
 cout<<ans;
}
