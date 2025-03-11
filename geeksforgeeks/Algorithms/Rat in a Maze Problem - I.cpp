#include <bits/stdc++.h>
class Solution
{
public:
    void anscheck(vector<vector<int>> vulvulaia, vector<vector<bool>> visited, vector<string> &s, string a, int st, int en)
    {
        int n = vulvulaia.size();
        if (st == n - 1 && en == n - 1)
        {
            s.push_back(a);
            return;
        }
        visited[st][en] = true;

        if (en + 1 < n && vulvulaia[st][en + 1] == 1 && !visited[st][en + 1])
        {
            a += 'R';
            anscheck(vulvulaia, visited, s, a, st, en + 1);
            a.pop_back();
        }
        if (st + 1 < n && vulvulaia[st + 1][en] == 1 && !visited[st + 1][en])
        {
            a += 'D';
            anscheck(vulvulaia, visited, s, a, st + 1, en);
            a.pop_back();
        }
        if (en - 1 >= 0 && vulvulaia[st][en - 1] == 1 && !visited[st][en - 1])
        {
            a += 'L';
            anscheck(vulvulaia, visited, s, a, st, en - 1);
            a.pop_back();
        }
        if (st - 1 >= 0 && vulvulaia[st - 1][en] == 1 && !visited[st - 1][en])
        {
            a += 'U';
            anscheck(vulvulaia, visited, s, a, st - 1, en);
            a.pop_back();
        }
    }
    vector<string> findPath(vector<vector<int>> &vulvulaia)
    {

        vector<vector<bool>> visited(vulvulaia.size(), vector<bool>(vulvulaia.size(), false));
        vector<string> s;
        if (vulvulaia[0][0] == 0)
            return s;
        string a;
        anscheck(vulvulaia, visited, s, a, 0, 0);
        return s;
    }
};
