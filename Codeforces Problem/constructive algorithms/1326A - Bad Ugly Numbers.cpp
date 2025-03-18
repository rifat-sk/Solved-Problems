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
      long long a;
      cin >> a;
      if (a == 1)
      {
         cout << -1 << endl;
         continue;
      }
      string s = "23";
      for (int i = 3; i <= a; i++)
      {
         s += '3';
      }
      cout << s << endl;
   }
}
