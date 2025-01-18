#include<iostream>
#include<algorithm>
using namespace std;

int main()
{   
    string str1,str2;
    cin>>str1>>str2;
    reverse(str2.begin(),str2.end());
    (str1==str2)?cout<<"YES":cout<<"NO";
}
