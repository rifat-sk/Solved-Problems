#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long a, b, ans_div, ans_mod;
    cin >> a >> b;
    
    if (a > b)
    {
      long long ab_div, ab_mod;
      ab_div = a / b;
      ab_mod = a % b;
      if (ab_mod > 0)
        ab_div++;
      b = b * ab_div;
    }

    ans_div = b / a;
    ans_mod = b % a;

    if (ans_mod > 0)
      ans_div++;
    cout << ans_div << endl;
  }
}
