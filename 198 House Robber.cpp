class Solution {
public:
    int rob(vector<int>& nums)
    {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        int prev2 = nums[0];                       // dp[i-2]
        int prev1 = max(nums[0], nums[1]);         // dp[i-1]

        for (int i = 2; i < n; ++i)
        {
            int curr = max(prev2 + nums[i], prev1);  // dp[i]
            prev2 = prev1;                            // update dp[i-2]
            prev1 = curr;                             // update dp[i-1]
        }

        return prev1;  // This holds the result for dp[n-1]
    }
};



class Solution {
public:
    int rob(vector<int>& nums)
    {
        int n = nums.size();

        // If only 1 element, return it
        if (n == 1)
            return nums[0];

        // Create array to store the maximum loot at each index
        vector<int> dp(n);

        // Memoize maximum loots at first 2 indexes
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        // Fill the dp array
        for (int i = 2; i < n; ++i)
        {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }

        return dp[n-1];
    }
};
