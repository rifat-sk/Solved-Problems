#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	unordered_map<string, string> lecture;
	vector<string> line;
	vector<string> ans;
	while (b--)
	{
		string str1, str2;
		cin >> str1 >> str2;
		lecture[str1] = str2;
	}
	while (a--)
	{
		string s;
		cin >> s;
		line.push_back(s);
	}
	for (auto word : line)
	{
		if (word.size() <= lecture[word].size())
		{
			cout << word << " ";
		}
		else
		{
			cout << lecture[word] << " ";
		}
	}
}
