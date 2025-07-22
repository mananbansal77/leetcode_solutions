class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long sum=0;
        int maxi=0;
        for(int p:weights)
        {
            if(p>maxi)
            maxi=p;
            sum+=p;
        }

        long low=maxi;
        int ans=-1;
        long high=sum;
        while(low<=high)
        {
            long mid=(low+high)/2;
            int cnt=1;
            int c=mid;
            for(int p:weights)
            {
                if(p<=c)
                {
                    
                   c= c-p;
                }
                else
                {
                    c=mid;
                    c=c-p;
                    cnt++;


                }
            }
            if(cnt<=days)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
               low=mid+1;
            }
        }
        return ans;
        
    }
};