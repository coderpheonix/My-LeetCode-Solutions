class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int max_current = nums[0];
        int max_global = nums[0];
        for (int i = 1; i < nums.size(); i++) {

        max_current = max(nums[i], max_current + nums[i]);


            if (max_current > max_global) {
                max_global = max_current;
            }
        }

        return max_global;
    }
};


// dynamic programming with optimized solution

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int curr = nums[0], best = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        curr = max(nums[i], curr + nums[i]);
        best = max(best, curr);
    }
    return best;
        
    }
};
