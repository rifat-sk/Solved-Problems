#include<iostream>
#include<algorithm>
using namespace std;

int main()
{   
    int n,m,ans=0;
    cin>>n>>m;
    while(n--)
    {
        int a;
        cin>>a;
        (a<=m)?ans+=1:ans+=2;
    }
    cout<<ans;
}
