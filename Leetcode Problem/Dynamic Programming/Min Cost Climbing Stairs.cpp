class Solution {
public:
int recursion(long long n,vector<int>cost,vector<int>&dp)
{
   if(n==0||n==1)
   return cost[n];
   if(dp[n]!=-1)
   return dp[n];
   dp[n]=cost[n]+min(recursion(n-1,cost,dp),recursion(n-2,cost,dp));
   return dp[n];
}
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1,-1);
        return min(recursion(cost.size()-1,cost,dp),recursion(cost.size()-2,cost,dp));
    }
};
