#include <bits/stdc++.h>
void Subsequences(string s, vector<string> &ans, string reserve, int n)
{
    if (n > s.size() - 1)
    {
        if (!reserve.empty())
            ans.push_back(reserve);
        return;
    }
    Subsequences(s, ans, reserve, n + 1);
    reserve += s[n];
    Subsequences(s, ans, reserve, n + 1);
}

vector<string> subsequences(string s)
{
    vector<string> ans;
    string reserve;
    int n = 0;
    Subsequences(s, ans, reserve, n);
    return ans;
}
