#include <bits/stdc++.h>
#define ll long long
#define test while (t--)
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   test
   {
      ll a, b;
      cin >> a >> b;
      string s;
      cin >> s;
      int min = INT_MAX, count_w = 0;
      for (int i = 0; i < b; i++)
      {
         if (s[i] == 'W')
         {
            count_w++;
         }
      }
      if (min > count_w)
         min = count_w;
      int st = 1;
      for (int i = b; i < a; i++, st++)
      {
         if (s[st - 1] == 'W')
            count_w--;
         if (s[i] == 'W')
            count_w++;
         if (min > count_w)
            min = count_w;
      }
      cout << min << endl;
   }
}
