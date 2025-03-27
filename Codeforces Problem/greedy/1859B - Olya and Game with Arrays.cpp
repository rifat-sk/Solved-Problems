#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      long long a;
      cin >> a;
      vector<long long> main;
      vector<long long> main2;
      for (long long i = 0; i < a; i++)
      {
         long long b;
         cin >> b;
         vector<long long> help(b);
         for (long long i = 0; i < b; i++)
         {
            cin >> help[i];
            main.push_back(help[i]);
         }
         sort(help.begin(), help.end());
         main2.push_back(help[1]);
      }
      sort(main.begin(), main.end());
      sort(main2.begin(), main2.end());
      long long sum = 0;
      for (long long i = 1; i < a; i++)
      {
         sum += main2[i];
      }
      sum += main[0];
      cout << sum << endl;
   }
}
