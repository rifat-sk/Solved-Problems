#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int a;
   cin >> a;
   string s, str_1, ans;
   cin >> s;
   vector<int> freq(26, 0);
   for (char c : s)
   {
      freq[c - 'a']++;
   }
   for (int i = 0; i < 26; i++)
   {
      if (freq[i] % a != 0)
      {
         cout << -1;
         return 0;
      }
      int k = freq[i] / a;
      while (k > 0)
      {
         str_1 += i + 'a';
         k--;
      }
   }
   while (a--)
   {
      ans += str_1;
   }
   cout << ans;
}
