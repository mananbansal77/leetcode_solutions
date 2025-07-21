class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        int maxi = 0;
        for (int num : nums) {
            if (num > maxi) {
                maxi = num;
            }
        }

        int low = 1;
        int high = maxi;

        while (high > low) {
            int mid = low + (high - low) / 2;
            int sum = 0;

            for (int i = 0; i < nums.size(); ++i) {
                sum += (nums[i] + mid - 1) / mid;
            }

            if (sum > h) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }
};