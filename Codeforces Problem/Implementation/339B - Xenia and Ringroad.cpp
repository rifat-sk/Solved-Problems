#include <bits/stdc++.h>
#define ll long long
#define test while (t--)
#define fl for (int i = 0; i < b; i++)
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll a, b;
   cin >> a >> b;
   vector<int> house(b);
   fl
   {
      cin >> house[i];
   }
   ll max = 0, ans = 0;
   fl
   {
      if (house[i] >= max)
      {
         max = house[i];
      }
      else
      {
         ans += max;
         ans += (a - max);
         max = house[i];
      }
   }
   ans += max;
   cout << ans - 1;
}
