#include <iostream>
using namespace std;

int main()
{
    string s, ans;
    int i = 0;
    bool cycle = false;
    cin >> s;
    while (i < s.size())
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i = i + 3;
            cycle = true;
            continue;
        }
        else
        {
            if (cycle && !ans.empty())
            {
                ans += ' ';
            }
            cycle = false;
            ans += s[i];
            i++;
        }
    }
    cout << ans;
}
