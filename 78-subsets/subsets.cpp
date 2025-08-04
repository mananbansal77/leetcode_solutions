class Solution {
public:
void func(vector<vector<int>>&v,vector<int>&curr,int y,vector<int>&nums)
{
    if(nums.size()==y)
    {
        v.push_back(curr);
        return;
    }
    curr.push_back(nums[y]);
    func(v,curr,y+1,nums);
    curr.pop_back();
    func(v,curr,y+1,nums);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>curr;
        func(v,curr,0,nums);
        return v;
        
    }
};