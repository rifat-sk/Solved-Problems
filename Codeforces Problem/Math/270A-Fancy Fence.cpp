#include <iostream>
#include <cmath>
using namespace std;

void solve() {
   int angle,ans;
   cin>>angle;
   ans=360%(180-angle);
   (ans==0)?cout<<"Yes"<<endl:cout<<"No"<<endl;
}

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        solve();
    }
}
