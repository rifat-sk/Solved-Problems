#include <bits/stdc++.h>
#define ll long long
#define test while (t--)
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   test
   {
      int a, b, c;
      cin >> a >> b >> c;
      int n = a * a;
      vector<int> arr(n);
      unordered_map<int, int> freq;
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
         freq[arr[i]]++;
      }
      sort(arr.begin(), arr.end());
      int st = arr[0], next = st + b;
      freq[st]--;
      bool v = false;
      for (int i = 0; i < a; i++)
      {
         for (int j = 0; j < a - 1; j++)
         {
            if (freq[next] == 0)
            {
               cout << "NO" << endl;
               v = true;
               break;
            }
            freq[next]--;
            next = next + b;
         }
         if (v)
            break;
         if (i == a - 1)
            break;
         st = st + c;
         if (freq[st] == 0)
         {
            cout << "NO" << endl;
            v = true;
            break;
         }
         freq[st]--;
         next = st + b;
      }
      if (!v)
         cout << "YES" << endl;
   }
}
