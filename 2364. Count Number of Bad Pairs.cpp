#include <unordered_map>

class Solution {
public:
    long long countBadPairs(vector<int>& nums)
    {
        int n = nums.size();
        long long total_pairs = (1LL * n * (n - 1)) / 2; // Total pairs

        unordered_map<int, long long> freq;
        long long good_pairs = 0;

        for (int i = 0; i < n; i++)
        {
            int transformed_val = nums[i] - i;
            good_pairs += freq[transformed_val]; // Count good pairs with the same transformed value
            freq[transformed_val]++; // Update frequency
        }

        return total_pairs - good_pairs; // Bad pairs = Total pairs - Good pairs
    }
};
