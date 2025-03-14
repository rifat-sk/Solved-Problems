#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, b, c;
  cin >> n >> b >> c;
  int ans = 0;
  int last_position = n - c;
  for (int i = b + 1; i <= n; i++)
  {
    if (i >= last_position)
      ans++;
  }
  cout << ans;
}
