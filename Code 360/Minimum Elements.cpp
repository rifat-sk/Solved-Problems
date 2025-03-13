#include <bits/stdc++.h>

int check(vector<int> &coin, int target,vector<int>&dp)
{
   if(target==0)
   return 0;
   if(target<0)
   return INT_MAX;
   if(dp[target]!=-1)
   return dp[target];
   int mini=INT_MAX;
   for(int i=0;i<coin.size();i++)
   {
       int ans=check(coin,target-coin[i],dp);
       if(ans!=INT_MAX)
       {
           mini=min(mini,ans+1);
       }
       
   }
   dp[target]=mini;
   return mini;
}

int minimumElements(vector<int> &coin, int target)
{
  vector<int>dp(target+1,-1);
  int ans=check(coin,target,dp);
  if(ans==INT_MAX)return -1;
  else return ans;

}
