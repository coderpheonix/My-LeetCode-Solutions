class Solution {
public:
    bool isMatch(string s, string p)
{
        int m = s.length();
        int n = p.length();

        // DP table with size (m+1) x (n+1)
        vector<vector<bool>> dp(m+1, vector<bool>(n+1, false));

        // Empty string matches with empty pattern
        dp[0][0] = true;

        // Handle patterns like a*, a*b*, etc. at the beginning of the pattern
        for (int j = 1; j <= n; ++j) 
        {
            if (p[j-1] == '*') 
            {
                dp[0][j] = dp[0][j-2]; // '*' acts as empty
            }
        }

        // Fill the DP table
        for (int i = 1; i <= m; ++i)
            {
            for (int j = 1; j <= n; ++j) 
            {
                if (p[j-1] == '.' || p[j-1] == s[i-1])
                {
                    // If current characters match or pattern has '.'
                    dp[i][j] = dp[i-1][j-1];
                }
                else if (p[j-1] == '*')
                {
                    // Check if '*' can match zero or more characters
                    dp[i][j] = dp[i][j-2]; // '*' acts as zero occurrence
                    if (p[j-2] == '.' || p[j-2] == s[i-1]) 
                    {
                        dp[i][j] = dp[i][j] || dp[i-1][j]; // '*' matches one or more
                    }
                }
            }
        }

        // The answer is in dp[m][n]
        return dp[m][n];
    }
};

