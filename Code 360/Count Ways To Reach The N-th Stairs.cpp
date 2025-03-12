#include <bits/stdc++.h> 

int recursion(int nStairs,vector<int>&dp)
{
    if(nStairs<0)
    return 0;
    if(nStairs==0)
    return 1;
    if(dp[nStairs]!=-1)
    return dp[nStairs];
    dp[nStairs]=(recursion(nStairs-1,dp)+recursion(nStairs-2,dp))%(1000000007);
    return dp[nStairs];
}
int countDistinctWays(int nStairs) {
   vector<int>dp(nStairs+1,-1);
    return recursion(nStairs,dp);
}
