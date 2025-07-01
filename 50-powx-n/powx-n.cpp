class Solution {
public:
    double myPow(double x, int n) {
        long nn=n;
        if(nn<0)
        nn=-1*nn;
        double ans=1;
        while(nn>0)
        {
            if(nn%2==1)
            {
                ans=ans*x;
                nn--;
            }
            else
            {
                nn=nn/2;
                x=x*x;
            }
        }
        if(n<0)
        return 1/ans;
        else
        return ans;
        
    }
};