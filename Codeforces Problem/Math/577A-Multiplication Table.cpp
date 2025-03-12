#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c=0;
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        if((b%i)==0&&(b/i)<=a)
        c++;
    }
    cout<<c;
}
