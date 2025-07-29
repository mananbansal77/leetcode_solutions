class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        mp[0]=1;
        // int left=0;
        int sum=0;
        int cnt=0;
        for(int right=0;right<nums.size();right++)
        {
            sum+=nums[right];
            int remove=sum-k;
            cnt+=mp[remove];
            mp[sum]++;

        }
        return cnt;
        
    }
};