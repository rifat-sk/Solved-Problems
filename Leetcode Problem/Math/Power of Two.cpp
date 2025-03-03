class Solution {
public:
    bool isPowerOfTwo(int n) {
       int i=0;
        while(i<=30)
        {
            int k = pow(2,i);
            i++;
            if(n==k)
            return true;
        }
        
        return false;
    }
};
