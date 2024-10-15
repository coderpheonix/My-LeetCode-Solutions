class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        vector<vector<int>> result; // To store the resulting quadruplets
        int n = nums.size();

        // Sort the array to help skip duplicates
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++)
        {
            // Skip duplicate for i
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n - 2; j++)
            {
                // Skip duplicate for j
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                for (int k = j + 1; k < n - 1; k++)
                {
                    // Skip duplicate for k
                    if (k > j + 1 && nums[k] == nums[k - 1]) continue;

                    for (int a = k + 1; a < n; a++)
                    {
                        // Skip duplicate for a
                        if (a > k + 1 && nums[a] == nums[a - 1]) continue;

                        // Use long long for the sum to prevent overflow
                        long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[a];

                        // Check if the sum of the four numbers equals the target
                        if (sum == target)
                        {
                            result.push_back({nums[i], nums[j], nums[k], nums[a]});
                        }
                    }
                }
            }
        }
        return result; // Return the vector of quadruplets
    }
};

