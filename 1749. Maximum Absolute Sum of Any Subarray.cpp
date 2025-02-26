class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums)
    {
        int maxSum = 0, minSum = 0;
        int maxEnding = 0, minEnding = 0;

        for (int num : nums)
        {
            maxEnding = max(num, maxEnding + num);
            maxSum = max(maxSum, maxEnding);

            minEnding = min(num, minEnding + num);
            minSum = min(minSum, minEnding);
        }

        return max(abs(maxSum), abs(minSum));
    }
};
