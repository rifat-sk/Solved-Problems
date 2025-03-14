#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long a, b, ans;
    cin >> a >> b;
    long long x, y, z;
    if (b <= 1)
    {
      cout << "NO" << endl;
      continue;
    }
    x = a;
    y = a * (b - 1);
    if (x == y)
    {
      y = a * b;
      z = y + x;
    }
    else
    {
      z = a * b;
    }
    cout << "YES" << endl
         << x << " " << y << " " << z << endl;
  }
}
