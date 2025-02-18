class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int maxSum = 0;

        // Step 1: Compute the sum of the last 'k' elements (this is the initial window).
        int windowSum = 0;
        for (int i = n - k; i < n; i++) {
            windowSum += cardPoints[i];
        }
        maxSum = windowSum;  // Initialize maxSum with the sum of the last 'k' elements

        // Step 2: Slide the window and consider cards from the left and right.
        for (int i = 0; i < k; i++) {
            windowSum += cardPoints[i] - cardPoints[n - k + i];  // Add card from the front and remove from the back
            maxSum = max(maxSum, windowSum);  // Update maxSum if necessary
        }

        return maxSum;
    }
};
