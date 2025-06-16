//  Approach 1: Space-Optimized DP (Bottom-Up)
class Solution {
public:
    int robliner(vector<int>& nums, int start, int end)
    {
        if (start == end) return nums[start];

        int prv2 = nums[start];
        int prv1 = max(nums[start], nums[start + 1]);

        for (int i = start + 2; i <= end; i++) {
            int curr = max(prv2 + nums[i], prv1);
            prv2 = prv1;
            prv1 = curr;
        }

        return prv1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        int max1 = robliner(nums, 0, n - 2);
        int max2 = robliner(nums, 1, n - 1);

        return max(max1, max2);
    }
};



//  Approach 2: Tabulation DP (Bottom-Up with dp[] Array)
class Solution {
public:
    int robLinearTabulation(vector<int>& nums, int start, int end) {
        int len = end - start + 1;
        if (len == 1) return nums[start];

        vector<int> dp(len);
        dp[0] = nums[start];
        dp[1] = max(nums[start], nums[start + 1]);

        for (int i = 2; i < len; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[start + i]);
        }

        return dp[len - 1];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        int max1 = robLinearTabulation(nums, 0, n - 2);
        int max2 = robLinearTabulation(nums, 1, n - 1);

        return max(max1, max2);
    }
};


//  Approach 3: Memoization (Top-Down with Recursion)
class Solution {
public:
    int robFrom(int index, int end, vector<int>& nums, vector<int>& dp) {
        if (index > end) return 0;

        if (dp[index] != -1) return dp[index];

        int rob = nums[index] + robFrom(index + 2, end, nums, dp);
        int skip = robFrom(index + 1, end, nums, dp);

        return dp[index] = max(rob, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        vector<int> dp1(n, -1);
        int max1 = robFrom(0, n - 2, nums, dp1);

        vector<int> dp2(n, -1);
        int max2 = robFrom(1, n - 1, nums, dp2);

        return max(max1, max2);
    }
};
