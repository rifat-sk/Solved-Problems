#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      string s;
      cin >> s;
      if (s.size() == 1)
      {
         cout << 1 << endl;
         continue;
      }
      int count_1 = 0, count_0 = 0;
      for (char c : s)
      {
         if (c == '1')
         {
            count_1++;
         }
         else
         {
            count_0++;
         }
      }

      if (count_1 == 0 || count_0 == 0)
      {
         cout << s.size() << endl;
         continue;
      }
      if (count_1 == count_0)
      {
         cout << 0 << endl;
         continue;
      }
      int count = 0;
      for (char c : s)
      {
         if (c == '1')
         {
            count_0--;
            if (count_0 < 0)
               break;
            count++;
         }
         else
         {
            count_1--;
            if (count_1 < 0)
               break;
            count++;
         }
      }
      cout << s.size() - count << endl;
   }
}
