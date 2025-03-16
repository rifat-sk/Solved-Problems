#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      if (n == 1)
      {
         cout << 1 << endl;
         continue;
      }
      if (n == 2)
      {
         cout << -1 << endl;
         continue;
      }
      if (n % 2 == 0)
      {
         for (int i = 1, j = 2; i <= n * n; i++)
         {
            ((j + (n - 1)) % (n * n) == 0) ? cout << n * n << " " : cout << (j + (n - 1)) % (n * n) << " ";
            if (i % n == 0)
               cout << endl;
            j = (j + (n - 1)) % (n * n);
         }
      }
      else
      {
         for (int i = 1, j = 2; i <= n * n; i++)
         {
            ((j + (n - 1)) % (n * n) == 0) ? cout << n * n << " " : cout << (j + (n - 1)) % (n * n) << " ";
            if (i % n == 0)
               cout << endl;
            j = (j + (n - 1)) % (n * n);
         }
      }
   }
}
