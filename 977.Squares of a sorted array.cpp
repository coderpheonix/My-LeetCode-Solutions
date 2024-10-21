class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> nums1(nums.size()); // Create a result vector of the same size

        // Square each element
        for (int i = 0; i < nums.size(); ++i) {
            nums1[i] = nums[i] * nums[i];
        }

        // Sort the squared values
        sort(nums1.begin(), nums1.end());

        return nums1; // Return the sorted squares
    }
};

