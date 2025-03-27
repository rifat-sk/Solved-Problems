#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int total_button;
   cin >> total_button;
   int ans = 0, correct_button = 0, button = total_button - 1;
   for (int i = 1; i <= total_button; i++)
   {
      if (i > 1 && i < total_button)
      {
         ans += button * correct_button;
      }
      ans += button;
      correct_button++;
      button--;
   }
   ans += total_button;
   cout << ans << endl;
}
