class Solution {
public:
    int reverse(int x) {
        long long ans=x,a=0;
  while(x!=0)
  {
    a=a*10;
    a+=x%10;
    x=x/10; 
  }
  if(a>=pow(2,31)||a<pow(-2,31))
  return 0;
  return a;
    }
};
