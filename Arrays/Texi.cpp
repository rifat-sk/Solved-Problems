#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  long long n,count=0;
  cin>>n;
  vector<int>help(n);
  for (long long i = 0; i < n; ++i) {
        cin >> help[i];
    }
  sort(help.begin(),help.end());
  long long left=0,right=help.size()-1;
  while(left<=right)
  {
     if(left==right)
      {  
        count++;
        break;
      }
    else if(help[right]==4)
    {
      count++;
      right--;
    }
    else if(help[right]+help[left]==4)
    {
      count++;
      right--;left++;
    }
    else if(help[right]+help[left]!=4)
      {
        for(int s=help[left];s<=4;)
        {
          left++;
          s+=help[left];
        }
        count++;   
    }
  }
  cout<<count;
}
