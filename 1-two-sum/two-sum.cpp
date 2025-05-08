class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp.push_back({nums[i], i}); // Store value and original index
        }

        sort(mp.begin(), mp.end()); // Sort by value

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = mp[left].first + mp[right].first;
            if (sum == target) {
                return {mp[left].second, mp[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return {}; // If no pair found
    }
};