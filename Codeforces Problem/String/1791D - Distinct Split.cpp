#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a;
		cin >> a;
		string s;
		cin >> s;
		set<char> check1;
		vector<int> ans(a + 1, 0);
		for (int i = 0; i < a - 1; i++)
		{
			check1.insert(s[i]);
			ans[i + 1] += check1.size();
		}
		set<char> check2;
		for (int j = a - 1; j > 0; j--)
		{
			check2.insert(s[j]);
			ans[j] += check2.size();
		}
		sort(ans.rbegin(), ans.rend());
		cout << ans[0] << endl;
	}
}
