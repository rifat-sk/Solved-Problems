#include<iostream>
#include<algorithm>
using namespace std;

bool check(string s)
{   
    int lc=0,uc=0;
    for(char c:s)
    {
      if((c-'a')<0)
      uc++;
      else
      lc++;
    }
    if(lc>=uc)return true;
    return false;
}


int main()
{   
    string s,ans;
    cin>>s;
    bool a=check(s);
    for(char c: s)
    {
      if(a)
      {
        ans+=tolower(c);
      }
      else
      {
        ans+=toupper(c);
      }
    }
    cout<<ans;
}
