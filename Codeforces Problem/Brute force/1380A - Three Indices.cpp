#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x = 0, y, z = INT_MAX;
        ll b;
        cin >> b;
        y = b - 1;
        vector<ll> arr(b);
        for (ll &c : arr)
        {
            cin >> c;
        }
        bool v = false;
        while (x < y)
        {
            for (int i = x + 1; i < y; i++)
            {
                if (arr[i] > arr[x] && arr[i] > arr[y])
                {
                    z = i;
                    v = true;
                    break;
                }
            }
            if (v)
            {
                break;
            }
            (arr[x] > arr[y]) ? x++ : y--;
        }
        if (z != INT_MAX)
        {
            cout << "YES" << endl;
            cout << x + 1 << " " << z + 1 << " " << y + 1 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
