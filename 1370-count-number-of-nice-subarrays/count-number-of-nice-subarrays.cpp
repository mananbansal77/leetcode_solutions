class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                nums[i]=0;

            }
            else
            {
                nums[i]=1;
            }

        }
        map<int,int>mp;
        mp[0]=1;
        int rem;
        int sum=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            rem=sum-k;
            cnt+=mp[rem];
            mp[sum]++;
        }
        return cnt;
        
    }
};