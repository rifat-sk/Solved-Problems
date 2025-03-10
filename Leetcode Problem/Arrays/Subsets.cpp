class Solution
{
public:
    void powerset(vector<vector<int>> &ans, vector<int> output, vector<int> given, int index)
    {
        if (index >= given.size())
        {
            ans.push_back(output);
            return;
        }
        powerset(ans, output, given, index + 1);

        output.push_back(given[index]);
        powerset(ans, output, given, index + 1);
    }
    vector<vector<int>> subsets(vector<int> &given)
    {

        vector<int> output;
        vector<vector<int>> ans;
        int n = 0;
        powerset(ans, output, given, n);
        return ans;
    }
};
