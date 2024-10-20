class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, sum = 0, minLength = INT_MAX;

        for (int right = 0; right <nums.size(); ++right) {
            sum += nums[right];

            while (sum >= target) {
                minLength = min(minLength, right - left + 1); // Update the minimum length
                sum -= nums[left]; // Remove the leftmost element from the sum
                ++left; // Move left pointer to shrink the window
            }
        }

        // If no valid sub array found, return 0, otherwise return the minimum length
        return (minLength == INT_MAX) ? 0 : minLength;
    }
