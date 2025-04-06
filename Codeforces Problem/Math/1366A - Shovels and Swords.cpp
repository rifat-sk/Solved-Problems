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
      ll a, b;
      cin >> a >> b;
      if (a > b && a / 2 >= b)
      {
         cout << b << endl;
         continue;
      }
      if (a < b && b / 2 >= a)
      {
         cout << a << endl;
         continue;
      }
      cout << (a + b) / 3 << endl;
   }
}
