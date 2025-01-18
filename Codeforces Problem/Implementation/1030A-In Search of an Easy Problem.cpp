#include<iostream>
#include<algorithm>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    while(n--)
    {
      int answer;
      cin>>answer;
      if(answer>0)
      {
        cout<<"HARD";
        return 0;
      }
    }
    cout<<"EASY";
}
