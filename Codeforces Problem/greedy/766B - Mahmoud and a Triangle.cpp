#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a;
  cin >> a;

  vector<int> num(a);

  for (int i = 0; i < a; i++)
  {
    cin >> num[i];
  }

  sort(num.begin(), num.end());
  while (a - 3 >= 0)
  {
    if ((num[a - 1] < num[a - 2] + num[a - 3]) && (num[a - 2] < num[a - 1] + num[a - 3]) && (num[a - 3] < num[a - 1] + num[a - 2]))
    {
      cout << "YES";
      return 0;
    }
    a--;
  }

  cout << "NO";
}
