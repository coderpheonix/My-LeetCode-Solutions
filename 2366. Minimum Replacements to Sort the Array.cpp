class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long replacements = 0;
        int n = nums.size();

        // Start from the second last element to the first
        for (int i = n - 2; i >= 0; --i) {
            if (nums[i] > nums[i + 1]) {
                // Number of replacements is the number of parts to split nums[i] into
                // such that each part is <= nums[i+1]
                long long parts = (nums[i] + nums[i + 1] - 1) / nums[i + 1]; // ceil(nums[i] / nums[i+1])
                replacements += parts - 1; // we need to make parts-1 replacements

                // After replacement, we treat nums[i] as if it has become `nums[i] / parts`
                nums[i] = nums[i] / parts;
            }
        }

        return replacements;
    }
};
