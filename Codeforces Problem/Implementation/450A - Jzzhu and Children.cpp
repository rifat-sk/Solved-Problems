#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long long a, b;
   cin >> a >> b;
   vector<int> student(a);
   for (int i = 0; i < a; i++)
   {
      cin >> student[i];
   }
   int max = -1, po = 0;
   for (int i = 0; i < a; i++)
   {
      int x = student[i] / b;
      if (student[i] % b > 0)
         x++;
      if ((max < x) || (max == x && po < i))
      {
         max = x;
         po = i;
      }
   }
   cout << po + 1 << endl;
}
