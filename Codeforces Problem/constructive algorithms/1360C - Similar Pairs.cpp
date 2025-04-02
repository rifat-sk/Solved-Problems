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
      ll x, odd = 0, even = 0;
      cin >> x;
      vector<int> arr(x);
      for (int &a : arr)
      {
         cin >> a;
         (a % 2 == 0) ? even++ : odd++;
      }
      even = even % 2;
      odd = odd % 2;
      if (even == 0 && odd == 0)
      {
         cout << "YES" << endl;
         continue;
      }
      sort(arr.begin(), arr.end());
      bool v = true;
      for (int i = 1; i < x; i++)
      {
         if (arr[i] - arr[i - 1] == 1)
         {
            cout << "YES" << endl;
            v = false;
            break;
         }
      }
      if (v)
      {
         cout << "NO" << endl;
      }
   }
}
