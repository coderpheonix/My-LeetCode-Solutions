class Solution {
public:
    // Method 1: 2D DP Table
    int uniquePaths2D(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 1)); // Initialize all with 1
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
    }

    // Method 2: 1D DP Optimized
    int uniquePaths1D(int m, int n) {
        vector<int> dp(n, 1); // Initialize the first row
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                dp[j] += dp[j - 1];
            }
        }
        return dp[n - 1];
    }

    // Method 3: Combinatorics
    int uniquePathsComb(int m, int n) {
        long long res = 1;
        int N = m + n - 2;
        int k = min(m - 1, n - 1);
        for (int i = 1; i <= k; ++i) {
            res = res * (N - k + i) / i;
        }
        return (int)res;
    }

    // Main method selector
    int uniquePaths(int m, int n, int method = 1) {
        if (method == 1)
            return uniquePaths2D(m, n);
        else if (method == 2)
            return uniquePaths1D(m, n);
        else
            return uniquePathsComb(m, n);
    }
};
