#include <bits/stdc++.h>
#define ll long long
#define test \
   int t;    \
   cin >> t; \
   while (t--)
using namespace std;

bool isInteger(double num)
{
   return floor(num) == num;
}

bool check(ll x)
{
   for (int i = 1; pow(i, 3) <= x / 2; i++)
   {
      ll y = pow(i, 3);
      ll z = x - y;
      if (z <= 0)
      {
         break;
      }
      double k = cbrt(z);
      if (isInteger(k))
      {
         return true;
      }
   }
   return false;
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   test
   {
      ll x;
      cin >> x;
      (check(x))?cout << "YES" << endl:cout << "NO" << endl;
   }
}
