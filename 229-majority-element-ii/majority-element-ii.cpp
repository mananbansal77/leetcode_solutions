class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1;
        int cnt1=0;
        int el2;
        int cnt2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt1==0 && nums[i]!=el2)
            {
                el1=nums[i];
                cnt1=1;
            }
            else if(cnt2==0 && nums[i]!=el1)
            {
                el2=nums[i];
                cnt2=1;
            }
            else if(nums[i]==el1)
            {
                cnt1++;

            }
            else if(nums[i]==el2)
            {
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        int a=nums.size()/3;
        int c=0;
        int d=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==el1)
            c++;
            else if(nums[i]==el2)
            d++;
        }
        if(c>a)
        v.push_back(el1);
        if(d>a)
        v.push_back(el2);
        return v;


        
    }
};