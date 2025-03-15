#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, ans;
  cin >> s;
  ans = s;
  reverse(ans.begin(), ans.end());
  cout << s + ans;
}
