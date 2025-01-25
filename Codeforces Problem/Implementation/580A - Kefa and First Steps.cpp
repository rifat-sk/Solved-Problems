#include <iostream>
using namespace std;

bool check(int a, int b)
{
    if (b <= a)
        return true;
    return false;
}

int main()
{
    int x;
    cin >> x;
    vector<int> digit(x);
    for (int i = 0; i < x; i++)
    {
        cin >> digit[i];
    }
    int count = 1, max = 1;
    for (int j = 1; j < x; j++)
    {
        if (check(digit[j], digit[j - 1]))
        {
            count++;
            if (max < count)
                max = count;
            continue;
        }
        else
            count = 1;
    }
    cout << max;
}
