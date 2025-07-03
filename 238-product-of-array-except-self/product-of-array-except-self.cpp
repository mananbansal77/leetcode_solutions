class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v;
        int y=1;
vector<int>t;
        for(int i=0;i<nums.size();i++)
        {
            y=y*nums[i];
            v.push_back(y);
        }
        y=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            y=y*nums[i];
            t.push_back(y);
        }
        reverse(t.begin(),t.end());
        vector<int>ans;
        ans.push_back(t[1]);
        for(int i=1;i<nums.size()-1;i++)
        {
            ans.push_back(v[i-1]*t[i+1]);
        }
        ans.push_back(v[v.size()-2]);
        return ans;
    }
};