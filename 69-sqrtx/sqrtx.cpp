class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;
        int low=0;
        int high=x;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if((long)mid*mid==long(x))
            return mid;
            else if((long)mid*mid>(long)x)
            {
                high=mid-1;
            } 
            else
            {
                low=mid+1;
            }
        }
        return high;
        
    }
};