class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left = 0, count = 0, product = 1;

    for (int right = 0; right < nums.size(); ++right) {
        product *= nums[right];

        // Shrink the window until the product is less than k
        while (product >= k && left <= right) {
            product /= nums[left];
            ++left;
        }

        // Add the number of subarrays ending at `right` with product less than k
        count += (right - left + 1);
    }

    return count;

    }
};
