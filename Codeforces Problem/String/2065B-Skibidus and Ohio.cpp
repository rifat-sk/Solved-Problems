#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] == s[i - 1])
			{
				cout << 1 << endl;
				goto jump;
			}
		}
		cout << s.size() << endl;
	jump:;
	}
}
