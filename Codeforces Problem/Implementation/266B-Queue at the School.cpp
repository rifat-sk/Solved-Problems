#include<iostream>
#include<algorithm>
using namespace std;

int main()
{   
    int n,t;
    cin>>n>>t;
    string ans;
    cin>>ans;
    while(t--)
    {
       for(int i=0;i<n;i++)
        {
            if(ans[i]=='B'&&ans[i+1]=='G')
            {
               swap(ans[i],ans[i+1]);
               i++;
            }
        }
    
    }
    cout<<ans;
}
