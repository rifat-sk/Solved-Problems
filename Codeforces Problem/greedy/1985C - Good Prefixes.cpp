#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--)
	{
		int a;
		cin>>a;
		long long num;
		vector<long long>max(a+1,0);
		vector<long long>sum(a+1,0);
		long long maxx=0;
		for(int i=1;i<=a;i++)
		{
          cin>>num;
		  if(max[i-1]<=num)max[i]=num;
		  else max[i]=max[i-1];
		  if(maxx<=num)
		  {
			sum[i]=sum[i-1]+maxx;
			maxx=num;
		  }
		  else
          sum[i]=sum[i-1]+num;
		}
		int ans=0;
		if(max[1]==0)
		ans++;
		for(int i=2;i<=a;i++)
		{
			if(sum[i]==max[i])
			ans++;
		}
		cout<<ans<<endl;
	}
}
