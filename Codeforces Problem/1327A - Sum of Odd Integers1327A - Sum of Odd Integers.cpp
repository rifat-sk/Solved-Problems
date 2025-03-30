#include <bits/stdc++.h>
#define ll long long
#define test \
   int t;    \
   cin >> t; \
   while (t--)
using namespace std;

ll m = 1e7;
vector<ll> sum(m+ 1);

void sum_()
{
   sum[1] = 1;
   for (ll i = 2, j = 3; i < m; i++, j += 2)
   {
      sum[i] = sum[i - 1] + j;
   }
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   sum_();
   test
   {
      ll a, b;
      cin >> a >> b;
      if ((a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0) || (a < sum[b]) || (b >= 1e7))
      {
         cout << "NO" << endl;
         continue;
      }
      if ((a % 2 != 0 && b == 1) || (a >= sum[b]))
      {
         cout << "YES" << endl;
         continue;
      }
   }
}
