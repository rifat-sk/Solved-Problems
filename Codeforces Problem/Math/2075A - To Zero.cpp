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
      long long n, a, ans = 0;
      cin >> n >> a;
      if (n % 2 == 0 && a % 2 == 0)
      {
         if (n % a == 0)
            cout << (n / a) << endl;
         else
            cout << (n / a) + 1 << endl;
      }
      else if (n % 2 == 0 && a % 2 != 0)
      {
         --a;
         if (n % a == 0)
            cout << (n / a) << endl;
         else
            cout << (n / a) + 1 << endl;
      }
      else if (n % 2 != 0 && a % 2 != 0)
      {
         n = n - a;
         --a;
         if (n % a == 0)
            cout << (n / a) + 1 << endl;
         else
            cout << (n / a) + 2 << endl;
      }
      else if (n % 2 != 0 && a % 2 == 0)
      {
         --a;
         n = n - a;
         --a;
         if (n % a == 0)
            cout << (n / a) + 1 << endl;
         else
            cout << (n / a) + 2 << endl;
         cout << n / a << endl;
      }
   }
}
