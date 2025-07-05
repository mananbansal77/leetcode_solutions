class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int longi=0;
        int cnt;
        int x;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        for(auto it:s)
        {
            if(s.find(it-1)==s.end())
            {
                cnt=1;
                x=it;
                while(s.find(x+1)!=s.end())
                {
                    cnt++;
                    x++;
                }
                longi=max(longi,cnt);
                cnt=0;
            }
        }
        return longi;
        
    }
};