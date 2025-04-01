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
      int a, m = 0;
      cin >> a;
      set<int> num;
      unordered_map<int, int> skill;
      for (int i = 0; i < a; i++)
      {
         int x;
         cin >> x;
         num.insert(x);
         skill[x]++;
         m = max(m, skill[x]);
      }
      if (m > (num.size()))
      {
         cout << num.size() << endl;
      }
      else if (m == (num.size()))
      {
         cout << num.size() - 1 << endl;
      }
      else
      {
         cout << m << endl;
      }
   }
}
