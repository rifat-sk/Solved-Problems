#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        string s;
        cin>>s;
        while(s.find("()")!=string::npos)
        {
            size_t it=s.find("()");
            s.erase(s.begin()+it);
            s.erase(s.begin()+it);
        }
        int cnt=0;
        for(char c:s)
        {
          if(c==')')cnt++;
        }
        cout<<cnt<<endl;
    }
}
