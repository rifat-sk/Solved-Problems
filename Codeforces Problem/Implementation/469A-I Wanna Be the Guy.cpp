#include <iostream>
#include <algorithm> 
#include<set>
using namespace std;

int main()
{
  int level;
  cin>>level;
  set<int>passlevel;
  int p1,p2;
  cin>>p1;
  while(p1--)
  {
    int p1l;
    cin>>p1l;
    passlevel.insert(p1l);
  }
  cin>>p2;
  while(p2--)
  {
    int p2l;
    cin>>p2l;
    passlevel.insert(p2l);
  }
  (passlevel.size()==level)?cout<<"I become the guy.":cout<<"Oh, my keyboard!";
}
