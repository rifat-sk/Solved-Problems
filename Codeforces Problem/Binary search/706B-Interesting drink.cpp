#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long n;
  cin>>n;
  vector<long long> help(n);
  for(long long i=0;i<n;i++)
  {
    cin>>help[i];
  }
  sort(help.begin(),help.end());
  long long m;
  cin>>m;
  while(m--)
  {
    long long s,count=0;
    cin>>s;
    count = upper_bound(help.begin(), help.end(), s) - help.begin();
    cout<<count<<endl;
  }
}
