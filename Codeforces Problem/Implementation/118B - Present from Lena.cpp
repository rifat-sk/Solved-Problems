#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int row = (2 * n) + 1;
	int col = (2 * n) + 1 + (2 * n);
	int col2 = (2 * n) + 1;
	bool visit1 = false, visit2 = false;
	int st = (2 * n) + 1;
	int mid = col2;
	for (int i = 1; i <= row; i++)
	{
		int digit = 0;
		for (int j = 1; j <= col2; j++)
		{
			if (j % 2 == 0)
			{
				cout << " ";
			}
			else if (st <= j)
			{
				if (j < mid)
					cout << digit++;
				else
					cout << digit--;
			}
			else
				cout << " ";
		}
		if (st == 1 || visit2)
		{
			st += 2;
			visit2 = true;
		}
		else
			st -= 2;
		cout << endl;
		if (col2 == col || visit1)
		{
			visit1 = true;
			col2 -= 2;
		}
		else
			col2 += 2;
	}
}
