#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a;
        cin>>a;
        (a%2==0)?cout<<(a/2)-1<<endl:cout<<a/2<<endl;
    }
}
