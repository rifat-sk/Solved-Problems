class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &num)
    {

        int n = num.size() * num.size();
        vector<int> freq(n, 0);
        for (auto digit : num)
        {
            for (int i = 0; i < num.size(); i++)
            {
                freq[digit[i] - 1]++;
            }
        }
        int repeating_numbers, missing_numbers;
        for (int i = 0; i < n; i++)
        {
            if (freq[i] == 0)
            {
                missing_numbers = i + 1;
                continue;
            }
            if (freq[i] == 2)
            {
                repeating_numbers = i + 1;
            }
        }
        return {repeating_numbers, missing_numbers};
    }
};
