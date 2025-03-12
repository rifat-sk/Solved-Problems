class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        double ans;
    for(int i=0;i<num2.size();i++)
    {
        num1.push_back(num2[i]);
    }
    sort(num1.begin(),num1.end());
    if(num1.size()%2!=0)
    {
        ans=num1[num1.size()/2];
        return ans;
    }
    else{
        ans=float(num1[num1.size()/2]+num1[(num1.size()/2)-1])/2;
        return ans;
    }
    }
};
