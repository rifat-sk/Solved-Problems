#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <unordered_set>
#include<set>
#include <cstdint>
#include<iomanip>
#include<unordered_map>
#include <numeric>
#include<cctype>

using namespace std;
 
int main()
{
    int n;
    cin>>n;
    pair<int,int> price[n];
    for(int i=0;i<n;i++)
    {
        cin>>price[i].first>>price[i].second;
    }
    sort(price,price+n);
    for(int k=0;k<n-1;k++)
    {
        if(price[k].first<price[k+1].first && price[k].second>price[k+1].second)
        {
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
    return 0;
}
