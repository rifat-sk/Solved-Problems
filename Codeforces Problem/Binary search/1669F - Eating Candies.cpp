#include <bits/stdc++.h>
#define ll long long
#define test \
   int t;    \
   cin >> t; \
   while (t--)
using namespace std;

int main()
{
   test
   {
      ll a;
      cin >> a;
      vector<ll> Candies(a);
      for (ll &aa : Candies)
      {
         cin >> aa;
      }
      ll left = 0, left_s = Candies[0], right_s = Candies[Candies.size() - 1], right = Candies.size() - 1, ans = 2, max = 0;
      while (left < right)
      {
         if (left_s > right_s)
         {
            right--;
            right_s += Candies[right];
            ans++;
         }
         else if (left_s < right_s)
         {
            left++;
            left_s += Candies[left];
            ans++;
         }
         else
         {
            if (ans > max)
               max = ans;
            left++;
            left_s += Candies[left];
            ans++;
         }
      }
      cout << max << endl;
   }
}
