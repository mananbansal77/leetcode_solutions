class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1&&nums[0]==target)
        return 0;
      if(nums.size()==1&&nums[0]!=target)
      return -1;

        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]<nums[high])
            {
                if(nums[mid]<=target&&nums[high]>=target)
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
                if(nums[low]<=target&&target<=nums[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
        }

        return -1;
    }
};