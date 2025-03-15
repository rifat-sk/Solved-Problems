#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if (a == b)
  {
    cout << 0 << endl;
    return 0;
  }

  int ratio = b / a;
  int ans = 0;
  if (b % a != 0)
  {
    cout << -1 << endl;
    return 0;
  }
  while (ratio % 2 == 0)
  {
    ratio = ratio / 2;
    ans++;
  }
  while (ratio % 3 == 0)
  {
    ratio = ratio / 3;
    ans++;
  }
  (ratio == 1) ? cout << ans : cout << -1;
}
