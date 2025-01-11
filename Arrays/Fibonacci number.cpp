//solve 1:
#include<iostream>
using namespace std;
int fectorial(int a)
{
  if(a==0)
  return 0;
  if(a==1)
  return 1;
  return fectorial(a-1)+fectorial(a-2);;
}

int main()
{
    int a,ans;
    cin>>a;
    cout<<fectorial(a);
}
//solve 2:
#include<iostream>
using namespace std;

int main()
{
    int n,a = 0, b = 1;;
    cin>>n;
    if (n <= 1) 
    cout<< n;
    else{
         
       for (int i = 2; i <= n; i++)
        {
            int temp = b;
            b = a + b;
            a = temp;
        }
        cout<<b;
       }
}
