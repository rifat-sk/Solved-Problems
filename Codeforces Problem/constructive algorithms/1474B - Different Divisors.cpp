#include <bits/stdc++.h>
#define ll long long
#define test \
   int t;    \
   cin >> t; \
   while (t--)
using namespace std;

int k = 1e7;
vector<bool> prime(k + 1, true);

void pre()
{
   prime[0] = prime[1] = false;
   for (int i = 2; i * i <= k; i++)
   {
      if (prime[i] == true)
      {
         for (int j = i * i; j <= k; j += i)
         {
            prime[j] = false;
         }
      }
   }
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   pre();
   test
   {
      int a, b, c;
      cin >> a;
      for (int i = a + 1; i < k; i++)
      {
         if (prime[i])
         {
            b = i;
            break;
         }
      }
      int x = b + a;
      for (int i = x; i < k; i++)
      {
         if (prime[i])
         {
            c = i;
            break;
         }
      }
      cout << b * c << endl;
   }
}
