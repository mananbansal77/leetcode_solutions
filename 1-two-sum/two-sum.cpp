class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        vector<int>v;
        vector<pair<int,int>>mp;
        for(int i=0;i<nums.size();i++)
        {
                mp.push_back({nums[i],i});
        }
        sort(mp.begin(),mp.end());
        int s=0;
        int e=nums.size()-1;
        while(s<e)
        {
           if(mp[s].first+mp[e].first==target)
           {
            v.push_back(mp[s].second);
            v.push_back(mp[e].second);
            break;
           }
           else if(mp[s].first+mp[e].first>target)
           {
            e--;
           }
           else
           s++;
        }
        return v;

        
    }
};