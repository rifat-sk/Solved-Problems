#include<iostream>
#include<algorithm>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    jump:
    n++;
    string s=to_string(n);
    sort(s.begin(),s.end());
    for(int i=1;i<s.size();i++)
    {
       if(s[i-1]==s[i])
       goto jump;
    }
    cout<<n;
}
