class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1&&nums[0]==target)
        return true;
      if(nums.size()==1&&nums[0]!=target)
      return false;

        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
               while (low < high && nums[low] == nums[low + 1]) low++;
            while (low < high && nums[high] == nums[high - 1]) high--;
            int mid=(high+low)/2;
            if(nums[mid]==target)
            return true;
            // if(nums[low]==nums[mid]&&nums[mid]==nums[high])
            // {
            //     low++;
            //     high--;
            //     continue;
            // }
            else if(nums[mid]<nums[high])
            {
                if(nums[mid]<target&&nums[high]>=target)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
            else
            {
                if(nums[low]<=target&&target<nums[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
        }

        return false;
    }
};