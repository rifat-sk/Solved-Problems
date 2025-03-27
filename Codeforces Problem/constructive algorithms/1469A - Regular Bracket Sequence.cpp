#include <bits/stdc++.h>
#define ll long long
#define test while (t--)
using namespace std;


int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   test
   {
      string s;
      cin>>s;
      if(s.size()%2!=0)
      {
         cout<<"NO"<<endl;
         continue;
      }
      if(s[0]==')'||s[s.size()-1]=='(')
      {
         cout<<"NO"<<endl;
         continue;
      }
      cout<<"YES"<<endl;
   }
}
