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
      long long a, b, c;
      cin >> a >> b >> c;
      vector<long long> tem(a);
      for (long long i = 0; i < a; i++)
      {
         cin >> tem[i];
      }
      long long count = 0, ans = 0;
      for (long long i = 0; i < a; i++)
      {
         if (tem[i] <= c)
         {
            count++;
         }
         else
         {
            for (long long j = b; j <= count; j++)
            {
               ans += count - (j - 1);
            }
            count = 0;
         }
      }
      for (long long i = b; i <= count; i++)
      {
         ans += count - (i - 1);
      }
      cout << ans << endl;
   }
}
