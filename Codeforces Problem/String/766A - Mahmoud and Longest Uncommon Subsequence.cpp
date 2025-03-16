#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a,b;
  cin>>a>>b;
  if(a==b)
  {
    cout<<-1;
    return 0;
  }
  (a.size()>b.size())?cout<<a.size():cout<<b.size();
}
