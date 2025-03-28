#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   int page;
   cin >> page;
   vector<int> day(7);
   for (int i = 0; i < 7; i++)
   {
      cin >> day[i];
   }
   int i = 0;
   while (page > 0)
   {
      page -= day[i];
      if (i == 6)
      {
         i = 0;
         continue;
      }
      i++;
   }
   (i == 0) ? cout << 7 << endl : cout << i << endl;
}
