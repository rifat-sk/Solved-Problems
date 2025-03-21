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
      int a, b, c;
      cin >> a >> b >> c;
      if (b == 0)
      {
         cout << 0 << endl;
         continue;
      }
      int card = a / c;
      if (card >= b)
      {
         cout << b << endl;
         continue;
      }
      int max_joker = card;
      int x = (b - card);
      int div = x / (c - 1);
      if (x % (c - 1) != 0)
         ++div;
      cout << max_joker - div << endl;
   }
}
