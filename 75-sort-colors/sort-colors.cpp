class Solution {
public:
void swap(int a,int b,vector<int>&nums)
{
    int c=0;
    c=nums[a];
    nums[a]=nums[b];
    nums[b]=c;

}
    void sortColors(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                swap(i,s,nums);
                s++;
                
            }
            

        }
        for(int i=nums.size()-1;i>=0;i--)
        {
             if(nums[i]==2)
            {
                swap(i,e,nums);
                e--;
                
            }
        }
       
    }
};