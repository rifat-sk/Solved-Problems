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
      int a;
      char c;
      string s;
      cin >> a;
      cin >> c;
      cin >> s;
      int max = 0;
      if (s.size() == 1)
      {
         cout << max << endl;
         continue;
      }
      int i = 0, ans;
      for (char ch : s)
      {
         int c_find = s.find(c, i);
         if (c_find == string::npos)
            break;
         int g_find = s.find('g', c_find);
         if (g_find == string::npos)
         {
            int find = s.find('g');
            ans = a - c_find;
            ans += find;
            if (ans > max)
               max = ans;
            break;
         }
         else
            ans = (g_find - c_find);
         if (ans > max)
            max = ans;
         i = g_find;
      }
      cout << max << endl;
   }
}
