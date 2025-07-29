class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        map<int,int>mp;
        mp[0]=1;
        int cnt=0;
        int sum=0;
        int rem;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            rem=sum-goal;
            cnt+=mp[rem];
            mp[sum]+=1;
        }
        return cnt;
    }
};