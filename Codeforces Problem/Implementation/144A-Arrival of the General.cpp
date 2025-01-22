#include <iostream>
#include <vector>
#include <algorithm> 
#include <utility>   
using namespace std;


int main()
{
  int x,i,max=0,min=INT_MAX;
  cin>>x;
  i=x-1;;
  vector<int>bills;
  while(x--)
  {
    int a;
    cin>>a;
    bills.push_back(a);
    if(a>max)max=a;
    if(a<min)min=a;
  }
  auto it=find(bills.begin(),bills.end(),max);
  int maxposition=distance(bills.begin(), it);
  auto itt=find(bills.rbegin(),bills.rend(),min);
  int minposition=distance(bills.begin(),itt.base())-1;
  (maxposition>minposition)?cout<<(i-minposition)+maxposition-1:cout<<(i-minposition)+maxposition;
}
