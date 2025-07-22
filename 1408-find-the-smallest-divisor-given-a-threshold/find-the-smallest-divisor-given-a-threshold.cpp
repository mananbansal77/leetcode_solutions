class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=0;
        int n=nums.size();
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>maxi)

            {
                maxi=nums[i];
            }

        }
        int l=1;
        int h=maxi;
        while(l<=h)
        {
            int mid=(l+h)/2;
            int c=0;
            for(int p:nums)
            {
                if(p%mid==0)
                {
                    c+=p/mid;
                }
                else
                {
                    c+=(p/mid)+1;
                }

            }
            if(c<=threshold)
            {
                ans=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};