class Solution {
public:
void func(set<vector<int>>&se,vector<int>&curr,int y,vector<int>&nums)
{
    if(nums.size()==y)
    {
        vector<int>v=curr;
        sort(v.begin(),v.end());
        se.insert(v);
        return;
    }
    curr.push_back(nums[y]);
    func(se,curr,y+1,nums);
    curr.pop_back();
    func(se,curr,y+1,nums);
}
      vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>s;
        vector<vector<int>>v;
        vector<int>curr;
        func(s,curr,0,nums);
        for(auto it:s)
        {
            v.push_back(it);
        }

        return v;
        
    }
};