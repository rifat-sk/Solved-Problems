#include <iostream>  
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    char a,b,c;
    cin>>a>>b>>c;
    s+=tolower(a);
    s+=tolower(b);
    s+=tolower(c);
    (s=="yes")?cout<<"YES"<<endl:cout<<"NO"<<endl;
  }

}
